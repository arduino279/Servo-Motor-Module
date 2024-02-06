#include <Servo.h>

Servo servo;

class Servo2 {
  public:
    bool move(int angle);
    bool attach(int pin);
};

bool Servo2::move(int angle) {
  this->angle = angle;
  servo.write(angle);
  return true;
}

bool Servo2::attach(int pin) {
  servo.attach(pin);
  return true;
}
