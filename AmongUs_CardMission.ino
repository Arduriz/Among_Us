// 카드 인식 미션
#include <LiquidCrystal_I2C.h>
#include <Stepper.h>
#include <SoftwareSerial.h>

int accepted = 0; // 카드 인식

char command; // 블루투스
SoftwareSerial BTSerial(2, 3);

const int stepsPerRevolution = 200; // 모터
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD

int rLed = 13; // LED, 포토 인터럽터
int gLed = 12;
int photo = 5;

void setup() {
  BTSerial.begin(9600);
  myStepper.setSpeed(60);
  pinMode(photo, INPUT);
  pinMode(rLed, OUTPUT);
  pinMode(gLed, OUTPUT);
  lcd.begin();
}

void loop() {
  if(BTSerial.available()>0){ // 블루투스 통신    
    command = BTSerial.read(); 
    switch(command){
      case 'S':
        swipe();
        break;
      case 'R':
        reverse();
        break;
    }
  }

  int photoVal = digitalRead(photo); // 포토 인터럽터
  if (photoVal == HIGH){
     accepted = 1;
  }

  if (accepted == 0){ // 카드 인식
    digitalWrite(rLed, HIGH);
    digitalWrite(gLed, LOW);
    lcd.setCursor(16, 0);
    lcd.print("PLEASE SWIPE CARD");
    for (int position = 0; position < 1; position++) {
      lcd.scrollDisplayLeft();
      delay(300);
    }
  }
  else if (accepted == 1) {
    digitalWrite(rLed, LOW);
    digitalWrite(gLed, HIGH);
    lcd.setCursor(16, 0);
    lcd.print("ACCEPTED. THANK YOU.");
    for (int position = 0; position < 1; position++) {
      lcd.scrollDisplayLeft();
      delay(300);
    }
  }
}

void swipe() { // 카드 스와이프
  myStepper.step(stepsPerRevolution); // clockwise
  delay(300);
  myStepper.step(0);
}

void reverse() { // 카드 되돌리기
  myStepper.step(-stepsPerRevolution); // counterclockwise
  delay(300);
  myStepper.step(0);
}
