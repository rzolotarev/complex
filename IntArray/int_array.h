#ifndef INTARRAY_H_SENTRY
#define INTARRAY_H_SENTRY

class IntArray
{
    int *p;
    unsigned int size;
public:
    IntArray()
    {
        size = 16;
        p = new int[size];
    }

    ~IntArray()
    {
        delete [] p;
    }
    int& operator[](unsigned int idx);
private:
    void Resize(unsigned int reqired_size);
    void operator=(const IntArray& ref) {};
    IntArray(const IntArray& ref) {};
};

#endif