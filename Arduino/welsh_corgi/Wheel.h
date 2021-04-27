#ifndef Wheel_h
#define Wheel_h
#include "Arduino.h"

class Wheel {
  private:
    const uint8_t _pin_en1;
    const uint8_t _pin_en2;
    const uint8_t _pin_pwm;
  public:
    Wheel(uint8_t pin_en1 = 9, uint8_t pin_en2 = 10, uint8_t pin_pwm = 11);
    void rotate(int pwm = 0);
};
#endif
