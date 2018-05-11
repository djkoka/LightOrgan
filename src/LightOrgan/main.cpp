#include <iostream>
#include "lightorganpanel.h"

using namespace std;

int main()
{
    LightOrgan::LightOrganPanel lp;

    LightOrgan::Configs conf;
    lp.init(conf);
    cout << "Hello World!" << endl;
    return 0;
}
