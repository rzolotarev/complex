#ifndef SPARSEARRAY_SENTRY_H
#define SPARSEARRAY_SENTRY_H
class SparseArray
{
private:
    struct Item
    {
        int value;
        int index;
        Item *next;
    };
    Item *first;

    SparseArray(const SparseArray &) {}
    void operator=(const SparseArray &) {}

public:
    SparseArray() : first(0) {}
    ~SparseArray();
    class Interm
    {
    private:
        friend class SparseArray;
        SparseArray *master;
        int index;
        Interm(SparseArray *i_master, int ind) : master(i_master), index(ind) {}
        int &Provide();
        void Remove();

    public:
        operator int();
        int operator=(int x);
        int operator+=(int x);
        int operator++();
        int operator++(int);
    };
    Interm operator[](int idx)
    {
        return Interm(this, idx);
    }
};
#endif