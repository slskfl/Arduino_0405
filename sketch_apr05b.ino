const int LED=9;
const int BUTTON=2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);//LED(9번 핀)를 출력으로 지정
  pinMode(LED, INPUT);//BUTTON(2번 핀)을 입력으로 지정;
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON)==HIGH){
    digitalWrite(LED, HIGH);
  } else if(digitalRead(BUTTON)==LOW){
    digitalWrite(LED, LOW);
  }
}
