#ifndef Driver_H
#define Driver_H

#include "Arduino.h"
#include "Motor.h"

class Driver {
    public:
        Driver(Motor* ma_r, Motor* ma_l, Motor* mp_r, Motor* mp_l);
        void Forwarding();
        void Backwarding();
        void Stopping();
    private:
        Motor _ma_r;
        Motor _ma_l;
        Motor _mp_r;
        Motor _mp_l;
};

#endif
