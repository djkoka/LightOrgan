#ifndef GPIOINTERFACE_H
#define GPIOINTERFACE_H
namespace GPIO {

class GPIOInterface
{
public:
    virtual void sendLogicOne(int pin)= 0;
    virtual void sendLogicZero(int pin)= 0;
    virtual void systemDelay(int millis)= 0;
    virtual ~GPIOInterface(){}
};

}
#endif // GPIOINTERFACE_H
