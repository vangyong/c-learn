// Author: 王勇
// Time: 2019-12-08.
// Description: This is

#include <iostream>
#include "adapter.h"
#include "adaptee.h"
#include "target.h"

using namespace std;

int main(int argc, char *argv[])
{
    Adaptee * adaptee  = new Adaptee();
    Target * tar = new Adapter(adaptee);
    tar->request();

    return 0;
}