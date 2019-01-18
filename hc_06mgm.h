#ifndef HC_06mgm_H
#define HC_06mgm_H

#include "Arduino.h"

class HC_06mgm {
    public:
        HC_06mgm(char delimeter = '?');
        
        void Connect();
        void Disconnect();
        
        void Clear();
        String ReadUntilDelimeter();
        void Write(String str);
    private:
        char _Delimeter;    
};

#endif
