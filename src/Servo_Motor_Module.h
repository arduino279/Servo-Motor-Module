#include <Servo.h>

Servo servo;

class Servo2 {
  public:
    int pin;
    bool move(int angle);
    bool attach();
};

bool Servo2::move(int angle) {
  this.angle = angle;
  servo.write(angle);
  return true;
}

bool Servo2::attach() {
  servo.attach(pin);
  return true;
}
