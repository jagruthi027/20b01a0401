int led1=9;
int led2=10;
int led3=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(500);
  digitalWrite(led3,HIGH);
  delay(100);

}
