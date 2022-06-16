#include "price.h"

Price* PricePointer::operator=(Price *ptr)
{
    if (p)
        delete p;
    p = ptr;
    return p;
}

Price* PricePointer::operator->()
{
    return p;
}