#include <TimerOne.h>
#include <LiquidCrystal.h>

#define ENABLE 5
#define DIRY 3
#define DIRX 4
#define JOYSTICK A1

//                BS E D4  D5  D6  D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

int joystick_Value;
int motor_Speed;

const byte speed_sensor = 2;
unsigned int counter = 0;

float disk_slots = 20.0;

float rotation;
float motorSpeed;

void ISR_count(){
  counter++;
}

void ISR_TimerOne(){
  Timer1.detachInterrupt();
  rotation = (counter / disk_slots) * 60.0;
  motorSpeed = (0.1885 * rotation * 2.5);
  Serial.print(F("RPM  : ")); Serial.println(rotation);
  Serial.print(F("Speed: ")); Serial.println(motorSpeed);
  counter = 0;
  Timer1.attachInterrupt(ISR_TimerOne);  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(ENABLE, OUTPUT);
  pinMode(DIRY, OUTPUT);
  pinMode(DIRX, OUTPUT);
  pinMode(JOYSTICK, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  Timer1.initialize(100000); //1 second
  attachInterrupt(digitalPinToInterrupt (speed_sensor), ISR_count, RISING);
  Timer1.attachInterrupt(ISR_TimerOne);
}

void loop() {
  // put your main code here, to run repeatedly:
  joystick_Value = analogRead(JOYSTICK);
  if(joystick_Value<=506){
    digitalWrite(DIRY, LOW);
    digitalWrite(DIRX, HIGH);
    motor_Speed=-255./509.*joystick_Value+255.;
    analogWrite(ENABLE, motor_Speed);
  }
  if(joystick_Value>506){
    digitalWrite(DIRY, HIGH);
    digitalWrite(DIRX, LOW);
    motor_Speed=255./512.*joystick_Value-255.;
    analogWrite(ENABLE, motor_Speed);
  }
  delay(2000);
  lcd.setCursor(0,0);
  lcd.print("RPM  : "); lcd.print(rotation);
  lcd.setCursor(0,1);
  lcd.print("Speed: "); lcd.print(motorSpeed);
}
