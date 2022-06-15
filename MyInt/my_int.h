#ifndef MyInt_H_SENTRY
#define MyInt_H_SENTRY
#include <stdio.h>

class MyInt
{
  int i;
public:
    MyInt(int x): i(x) {}
    int get_i()
    {
        return i;
    }
    void set_i(int x)
    {
        i = x;
    }
    MyInt& operator++()
    {
        i++;
        return *this;
    }

    MyInt operator++(int)
    {
        MyInt tmp(*this);
        i++;
        return tmp;
    }

    MyInt(const MyInt &c)
    {
        printf("copied %d\n", c.i);
    }
};
#endif