#include "GPIO.h"

class ARM: public GPIO
{
public:
    ARM();
    ARM(PORT);
    void pinMode(int,int);
    void digitalWrite(int,bool);
    bool digitalRead(int);  
};
