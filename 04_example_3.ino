#define PIN_LED 13
unsigned int count, toggle;


void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial){
    ;//wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count =toggle = 0;
  digitalWrite(PIN_LED,toggle);//turn off LED.
  
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(++count);
  toggle =toggle;
  digitalWrite(PIN_LED, toggle); //update LED status.
  delay(1000); 
}
