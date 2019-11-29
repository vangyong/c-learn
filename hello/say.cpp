/* say.cpp */
#include "say.h"

void Say::sayString() {
    std::cout << string << "\n";
}

Say librarysay("Library instance of Say");
