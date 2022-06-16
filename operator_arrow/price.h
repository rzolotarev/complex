#ifndef PRICE_H_SENTRY
#define PRICE_H_SENTRY
struct Price
{
    int min, max;
};

class PricePointer
{
    Price *p;
public:
    PricePointer(Price *ptr = 0): p(ptr){}
    ~PricePointer()
    {
        if (p)
            delete p;
    }

    Price* operator=(Price*);
    Price* operator->();
};

#endif
