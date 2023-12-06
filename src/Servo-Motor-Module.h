#include <Servo.h>

class Servo {
  public:
    int servo;
    int angle;
    move(Servo i, int angle);
};

Servo servo;

void Servo::move(Servo i, int angle) {
  i.angle = angle;
  servo.attach(i.servo);
  servo.write(angle);
}
