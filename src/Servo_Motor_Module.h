#include <Servo.h>

Servo servo;

class Servo2 {
  public:
    int move(int angle);
    int attach(int pin);
};

int Servo2::move(int angle) {
  this.angle = angle;
  servo.write(angle);
  return true;
}

int Servo2::attach(int pin) {
  servo.attach(pin);
  return true;
}
