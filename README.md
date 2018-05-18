# Toy-Fingertip-gyro
## A school assignment 

## Requirement
- Button battery 1.5V * 2
- fingertip gyro * 1
- LED * 6
- arduino mini * 1

## Top View

![image](https://github.com/secret3557/Toy-Fingertip-gyro/blob/master/topview.jpg)

## Circuit:

Because there is no arduino mini pro module in TinkerCAD , so we put arduino UNO as mini ;
![image](https://github.com/secret3557/Toy-Fingertip-gyro/blob/master/circuitG.jpg)

## Demo video:

https://drive.google.com/file/d/0B-pnshKrF0NyZEdwQzJ1VTVaYzA/view

## Code:
```C
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
```
