#include <stdio.h>
#include <stdlib.h>

double square(double n)
{
    double sq = 1;

    while (fabs(sq * sq - n) > 0.0001) {
        sq = 0.5 * ( sq + n/sq);
    }

    return sq;
}

int main(int argc, char *argv[])
{
    int x;
    while(scanf("%d", &x) != EOF) {
        double input = (double)x;
        printf ("%d square root: %f\n", x, square(input));
    }
    
    return 0;
}
