#ifndef GPIOSIMULATION_H
#define GPIOSIMULATION_H
#include "gpiointerface.h"

namespace GPIO {

class GPIOSimulation : public GPIOInterface
{
public:
    GPIOSimulation();

    // GPIOInterface interface
public:
    void sendLogicOne(int pin) override;
    void sendLogicZero(int pin) override;
    void systemDelay(int millis) override;
};
}
#endif // GPIOSIMULATION_H
