#include "GPIO.h"

class AVR: public GPIO
{
public:
    AVR();
    AVR(PORT);
    void pinMode(int,int);
    void digitalWrite(int,bool);
    bool digitalRead(int);  
};