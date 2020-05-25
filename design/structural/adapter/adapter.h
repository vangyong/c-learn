// Author: 王勇
// Time: 2019-12-08.
// Description: This is

#ifndef C_LEARN_ADAPTER_H
#define C_LEARN_ADAPTER_H

#include "target.h"
#include "adaptee.h"

class Adapter : public Target
{

public:
    Adapter(Adaptee *adaptee);
    virtual ~Adapter();

    virtual void request();

private:
    Adaptee* m_pAdaptee;

};

#endif //C_LEARN_ADAPTER_H


