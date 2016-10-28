#include <Servo.h>
#include "fonctions.h"

Servo servoLeft;
Servo servoRight;

void setup()                                 
{
  tone(4, 3000, 1000);                       
  delay(1000);
  servoLeft.attach(13);
  servoRight.attach(12);  

  Serial.begin(9600);  
}  
 
void loop()                                  
{                                            
  int irLeft = irDistance(9, 10);
  int irRight = irDistance(2, 3);       

  if (irLeft == 5 && irRight == 5) {
    go(servoLeft, servoRight);
  }
  else if (irLeft <= 2 && irRight >= 3) {
    turnRight(servoLeft, servoRight);
  }
  else if (irLeft >= 3 && irRight <= 2) {
    turnLeft(servoLeft, servoRight);
  }
  else if (irLeft <= 2 && irRight <= 2) {
    turnRight(servoLeft, servoRight);
    delay(500);
    go(servoLeft, servoRight);
  }
  
  delay(50);          
}
int irDetect(int irLedPin, int irReceiverPin, long frequency)
{
  tone(irLedPin, frequency, 8);              
  delay(1);                                  
  int ir = digitalRead(irReceiverPin);       
  delay(1);                                  
  return ir;                                 
}
int irDistance(int irLedPin, int irReceivePin)
{  
  int distance = 0;
  for(long f = 38000; f <= 42000; f += 1000) {
    distance += irDetect(irLedPin, irReceivePin, f);
  }
  return distance;
}
