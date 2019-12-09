#include <iostream>
#include <exception>

struct MyException : public exception
{
    const char * what ()
    const throw ()
    {
        return "C++ Exception";
    }
};
