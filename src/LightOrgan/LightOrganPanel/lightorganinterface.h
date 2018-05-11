#ifndef LIGHTORGANINTERFACE_H
#define LIGHTORGANINTERFACE_H

namespace LightOrgan {
struct Configs{};

class LightOrganInterface
{
public:
    virtual void init(Configs conf) = 0;
    virtual void setLevel(int indicatorIndex, int level) = 0;
    virtual ~LightOrganInterface(){}
};

}

#endif // LIGHTORGANINTERFACE_H
