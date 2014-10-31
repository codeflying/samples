#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long hash(unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;

}

unsigned long sdbm(unsigned char *str)
{
    unsigned long hash = 0;
    int c;

    while (c = *str++)
        hash = c + (hash << 6) + (hash << 16) - hash; /* hash * 65599 + c */

    return hash;
}

int main(int argc, char *argv[])
{
    hash("fortick");
    printf("Hello, world!\n");

    return 0;
}
