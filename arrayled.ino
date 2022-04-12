int pinscount=8;
int pins[]={6,7,8,9,10,11,12,13};
void setup() {
  // put your setup code here, to run once:
  for (int i=0;i<pinscount; i=i+1)
  {
    pinMode(pins[i],OUTPUT);
  }
}

void loop() {
   for(int i=0; i<pinsCount; i=i+1){
    digitalWrite(pins[i], HIGH);
    delay(100);
    digitalWrite(pins[i], LOW);
  }
  for (int i=pinsCount-1; i>0; i=i-1){
    digitalWrite(pins[i], HIGH);
    delay(100);
    digitalWrite(pins[i], LOW);
   
  }
   
  // put your main code here, to run repeatedly:

}
