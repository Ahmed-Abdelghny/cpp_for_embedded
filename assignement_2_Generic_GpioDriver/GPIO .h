#include <iostream>

class GPIO
{
    public:
        GPIO();
        virtual void pinMode(int,int) = 0;
        virtual void digitalWrite(int,bool) = 0;
        virtual bool digitalRead(int) = 0;
};