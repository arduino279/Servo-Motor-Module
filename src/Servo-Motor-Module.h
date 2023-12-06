#include <Servo.h>

class ServoMotor {
  public:
    int servo;
    int angle;
    move(Servo i, int angle);
};

Servo servo;

void ServoMotor::move(ServoMotor i, int angle) {
  i.angle = angle;
  servo.attach(i.servo);
  servo.write(angle);
}
