#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <limits.h>

#define PI 3.141592653
#define N 20000000

double melo()
{
    long n = N;
    long count = 0;

    double x, y;

    srand(time(NULL));
    
    while(n-- > 0) {
        
        x = rand() / (double)INT_MAX * 2;
        y = rand() / (double)INT_MAX * 2;

        if ( (x - 1)*(x -1) + (y - 1)*(y - 1) <= 1) {
            count ++;
        }
    }

    return count / (double)N * 4;
}

int main(int argc, char *argv[])
{
    printf ("circle square: %f melo: %f\n", PI, melo());
    return 0;
}
