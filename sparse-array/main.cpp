#include "sparse-array.h"
#include "stdio.h"
int main(int argc, char **argv)
{
    SparseArray sa;
    sa[10] = 10;
    sa[11] = 11;
    printf("value %d\n", ++sa[10]);
}