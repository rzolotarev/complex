#include "./sparse-array.h"
#include "stdio.h"

SparseArray::~SparseArray()
{
    while (first)
    {
        Item *tmp = first;
        first = first->next;
        delete tmp;
    }
}

int SparseArray::Interm::operator=(int x)
{
    if (x == 0)
        Remove();
    else
        Provide() = x;
    return x;
}

int SparseArray::Interm::operator+=(int x)
{
    int &location = Provide();
    int res = ++location;
    if (location = 0)
        Remove();
    return res;
}

int SparseArray::Interm::operator++(int)
{
    int &location = Provide();
    int res = location++;
    if (location == 0)
        Remove();
    return res;
}

int SparseArray::Interm::operator++()
{
    int &location = Provide();
    int res = ++location;
    if (location == 0)
        Remove();
    return res;
}

SparseArray::Interm::operator int()
{
    Item *tmp;
    for (tmp = master->first; tmp; tmp = tmp->next)
    {
        if (tmp->index == index)
            return tmp->value;
    }

    return 0;
}