//임포스터 감지 및 조명
int echo = 8; // 초음파
int trig = 9;

int led = 7; // 조명

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(trig, LOW); // 거리측정
  digitalWrite(echo, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  unsigned long duration = pulseIn(echo, HIGH); 
  float distance = ((float)(340 * duration) / 10000) / 2; // cm로 변환
  delay(100);

  if (distance <= 10){ // 임포스터 감지
    digitalWrite(led, HIGH);
  }
  
  else if(distance > 10){
    digitalWrite(led, LOW);
  }
}
