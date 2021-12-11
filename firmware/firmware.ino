#include <Servo.h>

Servo j1,j2,j3,j4,j5,j6;  // Initializing Servo Names

int j1_fbk = A0;
void setup() 
  {
    Serial.begin(9600);
  // Attaching servos to arduino
  j1.attach(12);
  j2.attach(11);
  j3.attach(10);
  j4.attach(9);
  j5.attach(8);
  j6.attach(7);

  // Initial Home Positions
  delay(200);
  j1.write(90);    // 1st joint
  j2.write(45);    // 2nd joint
  delay(200);
  j3.write(90);    // 3rd joint
  j4.write(100);   // 4th joint
  delay(200);
  j5.write(45);    // 4th joint
  j6.write(90);
  delay(200);

  pinMode(j1_fbk,INPUT);
      }
void loop() {
Serial.print(analogRead(j1_fbk));
Serial.println("\n \n");
}
