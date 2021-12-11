#include <Servo.h>
#include <Filter.h>

Servo j1,j2,j3,j4,j5,j6;  // Initializing Servo Names
AnalogFilter<30, 10> filter;

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

  j1.write(100);    // 1st joint
  delay(1000);
  j1.detach();
  
  j2.write(45);    // 2nd joint
  delay(1000);
  j2.detach();

  j3.write(90);    // 3rd joint
  delay(1000);
  j3.detach();
  
  j4.write(100);   // 4th joint
  delay(1000);
  j4.detach();

  j5.write(45);    // 4th joint
  delay(1000);
  j5.detach();

  j6.write(90);
  delay(1000);
  j6.detach();

  pinMode(j1_fbk,INPUT);
  
      }
void loop() {
  
Serial.print(filter.update(analogRead(j1_fbk)));
Serial.println("\n \n");
}
