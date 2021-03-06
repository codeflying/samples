#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <signal.h>

void alarm_handler(int signum)
{
    printf("hello, there!\n");
}

int main(int argc, char *argv[])
{
    struct itimerval timer;
    timer.it_interval.tv_sec = 1;
    timer.it_interval.tv_usec = 0;
    timer.it_value.tv_sec = 1;
    timer.it_value.tv_usec = 0;

    setitimer(ITIMER_REAL, &timer, NULL);
    signal(SIGALRM, alarm_handler);

    while(1)
        pause();
    
    return 0;
}
