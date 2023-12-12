#include <Servo-Motor-Module.h>

void setup() {
  ServoMotor example = 9; /* Define the servo */
}

void loop() {
  example.move(56); /* Move the servo */
  delay(2000); /* Wait 2 seconds */
  example.move(167); /* Move the servo */
  delay(2000); /* Wait 2 seconds */
}
