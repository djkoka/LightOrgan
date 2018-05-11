#ifndef LEVELINDICATOR_H
#define LEVELINDICATOR_H

namespace LightOrgan {


class LevelIndicator
{
public:
    LevelIndicator();
    void setLevel(int level);
    void init(int countOfDioads);
    ~LevelIndicator();
private:
    int m_level=0;
};

}
#endif // LEVELINDICATOR_H
