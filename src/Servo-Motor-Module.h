#include <Servo.h>

struct ServoMotor {
    int servo;
    int angle;
    move(int angle);
} ServoMotor;

Servo servo;

void ServoMotor::move(int angle) {
  this.angle = angle;
  servo.attach(this.servo);
  servo.write(angle);
}
