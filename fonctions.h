void go (Servo servoLeft, Servo servoRight) {
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
}
void turnLeft (Servo servoLeft, Servo servoRight) {
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
}
void turnRight (Servo servoLeft, Servo servoRight) {
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
}
void goBack (Servo servoLeft, Servo servoRight) {
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
}
void pivotRight (Servo servoLeft, Servo servoRight) {
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1500);
}
void pivotLeft (Servo servoLeft, Servo servoRight) {
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1300);
}
void pivotBackRight (Servo servoLeft, Servo servoRight) {
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1500);
}
void pivotBackLeft (Servo servoLeft, Servo servoRight) {
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1700);
}
void returnBot (Servo servoLeft, Servo servoRight) {
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
//  delay(3000);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}
