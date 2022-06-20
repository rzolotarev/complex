#include "./sparse-array.h"

int &SparseArray::Interm::Provide()
{
    Item *tmp;
    for (tmp = master->first; tmp; tmp = tmp->next)
    {
        if (tmp->index == index)
            return tmp->value;
    }

    tmp = new Item;
    tmp->index = index;
    tmp->next = master->first;
    master->first = tmp;
    return tmp->value;
}

void SparseArray::Interm::Remove()
{
    Item **tmp;
    for (tmp = &master->first; *tmp; tmp = &(*tmp)->next)
    {
        if ((*tmp)->index == index)
        {
            Item *to_delete = *tmp;
            *tmp = (*tmp)->next;
            delete to_delete;
            return;
        }
    }
}