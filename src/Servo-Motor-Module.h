#include <Servo.h>

class ServoMotor {
  public:
    int servo;
    int angle;
    move(int angle);
};

Servo servo;

void ServoMotor::move(int angle) {
  this.angle = angle;
  servo.attach(this.servo);
  servo.write(angle);
}
