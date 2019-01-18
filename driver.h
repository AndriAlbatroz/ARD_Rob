#ifndef Driver_H
#define Driver_H

#include "Arduino.h"
#include "Motor.h"

class Driver {
    public:
        Driver();
        
        void SetMotor_AR(uint8_t pin_enable, uint8_t pin_forward, uint8_t pin_backward);
        void SetMotor_AL(uint8_t pin_enable, uint8_t pin_forward, uint8_t pin_backward);
        void SetMotor_PR(uint8_t pin_enable, uint8_t pin_forward, uint8_t pin_backward);
        void SetMotor_PL(uint8_t pin_enable, uint8_t pin_forward, uint8_t pin_backward);
        
        void Forward();
        void Backward();
        void Stop();

        void Right();
        void Left();

        void Execute(String str);

        enum State {
          Forwarding,
          Backwarding,
          TurningRight,
          TurningLeft,
          Stopped
        };
    private:
        Motor _ma_r;
        Motor _ma_l;
        Motor _mp_r;
        Motor _mp_l;
};

#endif
