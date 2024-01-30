#include <Servo.h>

Servo servo;

class Servo2 {
  public:
    int pin;
    int move(int angle);
    int attach();
};

int Servo2::move(int angle) {
  this.angle = angle;
  servo.write(angle);
  return true;
}

int Servo2::attach() {
  servo.attach(pin);
  return true;
}
