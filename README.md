# Arduino digital tachometer
This is a simple project about a digital tachometer using Arduino. 

## Components
A list about all the components I used:
  * Arduino ELEGOO UNO R3 - [Amazon Link](https://www.amazon.it/Elegoo-ATmega328P-ATMEGA16U2-Compatibile-Microcontrollore/dp/B01MRJR8UF/ref=sr_1_1_sspa?keywords=elegoo+uno+r3&qid=1663232163&sprefix=Elegoo+uno+r%2Caps%2C122&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExRThWV0lCM0VZWE5MJmVuY3J5cHRlZElkPUEwNjg2NzU1WkUwQzlUS0tXMEExJmVuY3J5cHRlZEFkSWQ9QTEwMjQ4MDFUSlhRUlc4NUxJTlgmd2lkZ2V0TmFtZT1zcF9hdGYmYWN0aW9uPWNsaWNrUmVkaXJlY3QmZG9Ob3RMb2dDbGljaz10cnVl "Arduino UNO ELEGOO R3")
  * Display LCD 16x2 - [Amazon Link](https://www.amazon.it/HiLetgo-HD44780-Character-Blacklight-Raspberry/dp/B079KF812H/ref=sr_1_3_sspa?__mk_it_IT=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=2QIXNP30NT7QA&keywords=display+lcd+arduino+16x2&qid=1663232212&sprefix=display+lcd+arduino+16x2%2Caps%2C106&sr=8-3-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExVEFQVlRDTjQ5NVo4JmVuY3J5cHRlZElkPUEwMzc4OTQwM0Y1UE9VUkFaUEhPTSZlbmNyeXB0ZWRBZElkPUEwNjQ5NDUwM1VGOVM2NUxHQUQ3USZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU= "Display LCD 16x2")
  * 9 Volt Battery Alkalyne
  * DC Gear motor 3/6 Volt - [Amazon Link](https://www.amazon.it/Gebildet-motoriduttore-giocattolo-robotico-giocattoli/dp/B07Z4PYJY4/ref=sr_1_1_sspa?__mk_it_IT=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=1MB3F0PD5X1TM&keywords=dc+gear+motor+3+6+volt&qid=1663232319&sprefix=dc+gear+motor+3+6+volt%2Caps%2C100&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExRVFWSFQ2MkdYQzlIJmVuY3J5cHRlZElkPUEwNzM2OTQ4M0xUWUpES082S1o3TyZlbmNyeXB0ZWRBZElkPUEwNjMyODQ4MVlSUE0zMDNQU1NHVCZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU= "DC Gear Motor 3/6 Volt") 
  * LM393 Speed sensor with a slotted disk - [Amazon Link](https://www.amazon.it/Youmile-Sensore-misurazione-velocit%C3%A0-accoppiatore/dp/B0817H9436/ref=sr_1_10?__mk_it_IT=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=18QTWPKTM8E53&keywords=lm393+speed+sensor&qid=1663232415&sprefix=lm393+speed+sensor+%2Caps%2C92&sr=8-10 "LM393 speed sensor with slotted disk")
  * Joystick Module for Arduino - [Amazon Link](https://www.amazon.it/Oumij-Joystick-Gamepad-Controller-Controllo/dp/B07W4Q7DLZ/ref=sr_1_1_sspa?keywords=arduino+joystick+module&qid=1663232470&sprefix=joystick+module+a%2Caps%2C105&sr=8-1-spons&psc=1&smid=A1RY2NNFUG5EXR&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExWVlZS1M5T0JNOTNFJmVuY3J5cHRlZElkPUExMDI0MjE4MVpTMlQxOVI5WjBFRSZlbmNyeXB0ZWRBZElkPUEwNTYzNjcwMlhUUU01NFpOUEo3VSZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU= "Joystick Module")
  * Jumper Wires MM MF - [Amazon Link](https://www.amazon.it/Elegoo-Cavetti-Maschio-Femmina-Raspberry/dp/B01N40EK6M/ref=sr_1_1_sspa?crid=3O37RW4ZMWHNN&keywords=jumper+wire+maschio+maschio&qid=1663232553&sprefix=jumper+wires+mas%2Caps%2C101&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEzQlQ1SzQ5TTFCWlpHJmVuY3J5cHRlZElkPUEwNTU4NTExWFBHODBXQzNHMEFYJmVuY3J5cHRlZEFkSWQ9QTAwODUxODI3UkxQSVhTMjZOUzEmd2lkZ2V0TmFtZT1zcF9hdGYmYWN0aW9uPWNsaWNrUmVkaXJlY3QmZG9Ob3RMb2dDbGljaz10cnVl "Jumper wires MM MF")

## Connections
A scheme about the circuit. 


## Code
You can find the `.ino` file with the code in the *code folder*. 

```c++
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
```
