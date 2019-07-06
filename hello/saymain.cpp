/* saymain.cpp */
#include "say.h"
int main(int argc,char *argv[])
{
    extern Say librarysay;
    //Say localsay = Say("Local instance of Say");s
    sayhello();
    librarysay.sayThis("howdy");
    librarysay.sayString();
    //localsay.sayString();
    return(0);
}
