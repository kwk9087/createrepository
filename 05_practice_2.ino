
void setup() {
  pinMode(7, OUTPUT);

}
void loop() {
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(7, HIGH);
  for (int i=0;i<5;i++){
    delay(200);
    digitalWrite(7, LOW);
    delay(200);
    digitalWrite(7, HIGH);

  }
  while(1){}
  

}
