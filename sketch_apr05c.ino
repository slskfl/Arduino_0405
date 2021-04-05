const int LED=9;
const int BUTTON=2;
boolean ledOn=false;
boolean lastButton=LOW;// 이전 눌림 상태를 저장하는 변수
boolean currentButton=LOW;//현재 버튼 눌림 상태를 저장하는 변수
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);//LED(9번 핀)를 출력으로 지정
  pinMode(LED, INPUT);//BUTTON(2번 핀)을 입력으로 지정;
}
void loop() {
  // put your main code here, to run repeatedly:
  currentButton=deBounce(lastButton);//디바운싱 처리된 값을 읽어옴
  if(lastButton==LOW & currentButton==HIGH){
    //버튼을 누름
    ledOn=!ledOn;
  }
  lastButton=currentButton; //이전 버튼 값을 현재 버튼 값으로 변경
  digitalWrite(LED, ledOn); //LED 점멸 상태를 바꿈
}

//작동할 때가 있고, 작동하지 않을 때에도 있음
//스위치 디바운싱 함수
boolean deBounce(boolean last){ //눌렀을 때 
  boolean current=digitalRead(BUTTON);//현재 버튼 상태를 확인
  if(last!=current){
    //이전 버튼 상태와 현재 버튼 상태가 다름
    delay(5);//5ms 동안 기다림 (진동 잡음을 건너뛰기)
    current=digitalRead(BUTTON); //현재 버튼 상태 저장
  }
  return current;
}
