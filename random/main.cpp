#include "stdio.h"
#include "ctime"

int main(int argc, char **argv)
{
    int a = 53;
    int b = 18;
    a ^= 18;
    printf("%d\n", a);
    time_t now = time(0);
    long now1 = time(0);
    // convert now to string form
    char *dt = ctime(&now);
    printf("%ld\n", now);
    printf("%ld\n", now1);
    printf("%s\n", dt);
}

// long xorshift128plus()
// {
//     long s1 = state0;
//     long s0 = state1;
//     state0 = s0;
//     s1 ^= s1 << 23;
//     s1 ^= s1 >> 17;
//     s1 ^= s0;
//     s1 ^= s0 >> 26;
//     state1 = s1;
//     return state0 + state1;
// }