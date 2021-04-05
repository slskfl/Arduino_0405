const int LED=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); //LED(9번 핀)를 출력으로 지정
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<255; i++){
    analogWrite(LED, i);
    delay(10);
  }
  for(int i=255; i>0; i--){
    analogWrite(LED, i);
    delay(10);
  }

}
