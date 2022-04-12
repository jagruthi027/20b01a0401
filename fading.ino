int ledpin=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledpin,512);
  delay(500);
  analogWrite(ledpin,256);
  delay(500);
  analogWrite(ledpin,128);
  delay(500);
  analogWrite(ledpin,0);
  delay(100);

}
