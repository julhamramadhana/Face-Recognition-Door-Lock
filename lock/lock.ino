int incomingByte = 0;
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

 
void setup(){
// Open serial connection.
Serial.begin(9600);
 myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
}
 
void loop(){
if (Serial.available() > 0) {
 // read the incoming byte:
 incomingByte = Serial.read();

if (incomingByte == 'H'){
  myservo.write(90);
//  delay(10);
}
if (incomingByte == 'L'){
  myservo.write(0);
 // delay(10);
}
//else if (incomingByte == 'H'){
//  myservo.write(90);
//  incomingByte = "";
//}
}
}
