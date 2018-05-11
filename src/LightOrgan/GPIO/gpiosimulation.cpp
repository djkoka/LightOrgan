#include "gpiosimulation.h"
#include <iostream>

using namespace GPIO;
using namespace std;
GPIOSimulation::GPIOSimulation()
{

}

void GPIOSimulation::sendLogicOne(int pin)
{

    std::cout<<"sendLogicOne "<<pin<<std::endl;
}

void GPIOSimulation::sendLogicZero(int pin)
{

    std::cout<<"sendLogicZero "<<pin<<std::endl;

}

void GPIOSimulation::systemDelay(int millis)
{

    std::cout<<"systemDelay "<<millis<<std::endl;

}
