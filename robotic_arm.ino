#include <Servo.h>                        //imiporting servo mototr library
Servo myservo;                            //crreating servo object for servo motor control

int potpin = 0;                           //analog pin used to connect potentiometer as controller
int val;                                  //  to read values from analog pin

void setup() {
myservo.attach(9);                        //attach servo to pin 9

}

void loop() {
  val= analogRead(potpin);
  val= map(val, 0, 1023, 0, 200);         // set the values for servo motor rotation
  myservo.write(val);
  delay(1);                               //adding delay to motor

}
