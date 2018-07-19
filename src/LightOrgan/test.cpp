#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
#include <time.h>
#include <unistd.h>

using namespace std;

enum Level{
    Disable = 0,
    Low,
    Middel,
    High,
    UltraHigh
};

typedef std::vector<int> LevelIndicator;
static const LevelIndicator levelIndicator1{2,3,4,14};
static const LevelIndicator levelIndicator2{15,18,17,27};
static const LevelIndicator levelIndicator3{22,23,24,10};
static const LevelIndicator levelIndicator4{9,25,11,8};

typedef std::vector<bool> LevelIndicatorEmu;
static LevelIndicatorEmu levelIndicatorEmu1(4);
static LevelIndicatorEmu levelIndicatorEmu2(4);
static LevelIndicatorEmu levelIndicatorEmu3(4);
static LevelIndicatorEmu levelIndicatorEmu4(4);

static map<const LevelIndicator*, LevelIndicatorEmu*> EmuTable{
    {&levelIndicator1, &levelIndicatorEmu1},
    {&levelIndicator2, &levelIndicatorEmu2},
    {&levelIndicator3, &levelIndicatorEmu3},
    {&levelIndicator4, &levelIndicatorEmu4}
};
void disableAllPin(LevelIndicator indicator){}
void eneblePin(int pin){}
void diseblePin(int pin){}

void emuIndicatorWork(const LevelIndicator &indicator){
    LevelIndicatorEmu* emu = EmuTable [&indicator];

    for(int i = 0; i<emu->size(); ++i){
        bool isDiodEneb = emu->at(i);
        if(isDiodEneb)
            cout<<'*';
    }
    cout<<endl;
    for(auto iter = emu->begin();iter != emu->end();++iter)
        (*iter)=false;
}

void setLevelEmu(LevelIndicatorEmu* emuInd, Level level){
    for(int i = Low; i<=level; ++i)
        emuInd->at(i)=true;
}

void setLevel(const LevelIndicator& indicator,const Level level){
    disableAllPin(indicator);
    if(Disable == level)
        return;
    for(int i = Low; i<=level; ++i)
        eneblePin(indicator[i]);
    setLevelEmu (EmuTable[&indicator], level);
}

Level generateRandomSignal (){
    return static_cast<Level>(rand()%4);
}

int main()
{
    while(true){
    srand (time(NULL));
    setLevel(levelIndicator1,generateRandomSignal());
    setLevel(levelIndicator2,generateRandomSignal());
    setLevel(levelIndicator3,generateRandomSignal());
    setLevel(levelIndicator4,generateRandomSignal());

    emuIndicatorWork(levelIndicator1);
    emuIndicatorWork(levelIndicator2);
    emuIndicatorWork(levelIndicator3);
    emuIndicatorWork(levelIndicator4);
    usleep(1000000);
    system("clear");
    }
    return 0;
}
