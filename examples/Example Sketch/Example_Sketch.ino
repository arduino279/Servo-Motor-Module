#include <Servo-Motor-Module.h>

void setup() {
  ServoMotor example = {9, 7}; /* Define the servo */
}

void loop() {
  example.move(example); /* Move the servo */
  delay(2000); /* Wait 2 seconds */
  example.angle = 57; /* Set a new angle */
  example.move(); /* Move the servo */
  delay(2000); /* Wait 2 seconds */
}
