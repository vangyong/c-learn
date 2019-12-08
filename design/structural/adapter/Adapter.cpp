// Author: 王勇
// Time: 2019-12-08.
// Description: This is


#include "Adapter.h"

Adapter::Adapter(Adaptee * adaptee){
    m_pAdaptee =  adaptee;
}

Adapter::~Adapter(){

}

void Adapter::request(){
    m_pAdaptee->specificRequest();
}
