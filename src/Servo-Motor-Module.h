#include <Servo.h>

struct Servo2 {
    int servo;
    int angle;
    move(int angle);
    attach();
} Servo2;

Servo servo;

void Servo2::move(int angle) {
  this.angle = angle;
  servo.write(angle);
}

void Servo2::attach() {
    servo.attach(this.servo);
}
