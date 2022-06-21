#include "stdio.h"

class A
{
private:
    int a_pr;

protected:
    int a_prt;

public:
    int a_pub;
    virtual void ttt()
    {
        printf("A\n");
    }
};

class C
{
public:
    virtual void ttt()
    {
        printf("C\n");
    }
};

class B : public A
{
};

int main(int argc, char **argv)
{
    B b;
    b.ttt();
}