#ifndef LIGHTORGANPANEL_H
#define LIGHTORGANPANEL_H

#include "lightorganinterface.h"
namespace LightOrgan {

class LightOrganPanel : public LightOrganInterface
{
public:
    LightOrganPanel();

    // LightOrganInterface interface
    void init(Configs conf) override;
    void setLevel(int indicatorIndex, int level) override;
};

}


#endif // LIGHTORGANPANEL_H
