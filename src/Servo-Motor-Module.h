#include <Servo.h>

Servo servo;

class Servo2 {
  public:
    move(int angle);
    attach(int pin);
};

void Servo2::move(int angle) {
  this.angle = angle;
  servo.write(angle);
}

void Servo2::attach(int pin) {
    servo.attach(pin);
}
