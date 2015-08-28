#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int main(void)
{
    unsigned char a = 0xff;
    char b = 0xff;
    printf("A: %08x, B: %08x\n", a, b);
    return 0;
}
