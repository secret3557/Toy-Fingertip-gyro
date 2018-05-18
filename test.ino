#define T 2
void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<7;i++)
  {
      pinMode(i,OUTPUT);
      digitalWrite(i,HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i =2;i<7;i++)
  {
    digitalWrite(i,LOW);
    delay(T);
    digitalWrite(i,HIGH);
    delay(T);  
  }
  for(int i =6;i>1;i--)
  {
    digitalWrite(i,LOW);
    delay(T);
    digitalWrite(i,HIGH);
    delay(T);  
  }
}
