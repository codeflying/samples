#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

int64_t fib(int64_t n)
{
    if (n < 2) {
        return 1;
    } else {
        return fib(n - 1) + fib(n -2);
    }
}

int64_t fibonacci_iter(int64_t n,
                       int64_t acc1,
                       int64_t acc2)
{
    if (n < 2) {
        return acc2;
    } else {
        return fibonacci_iter(n - 1, acc2, acc1 + acc2);
    }
}

int64_t fibonacci(int64_t n)
{
    return fibonacci_iter(n, 1, 1);
}

void print_time_consumption(struct timeval start,
			    struct timeval end)
{
    double consumed_time = (end.tv_sec - start.tv_sec) + \
                           (end.tv_usec - start.tv_usec) / CLOCKS_PER_SEC;
    printf("consumed time: %f seconds.\n", consumed_time);
}

int main(int argc, char *argv[])
{
    int n;
    int64_t result;
    struct timeval start, end;
    printf("Please input a number: \n");
    while(scanf("%d", &n) != EOF) {

        /*        
        gettimeofday(&start, NULL);
        result = fib(n);
        gettimeofday(&end, NULL);
        printf("fib(%d) = %lld\n", n, result);
        print_time_consumption(start, end);
        */

        gettimeofday(&start, NULL);
        result = fibonacci(n);
        gettimeofday(&end, NULL);
        printf("fib(%d) = %lld\n", n, result);		
        print_time_consumption(start, end);
    }
    return 0;
}

