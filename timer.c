#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void do_smth()
{
    printf("good Boy\n");
}

void *do_smth_periodically(void *data)
{
    int interval = *(int *)data;
    for (;;) {
        do_smth();
        sleep(interval);
    }
}

int main()
{
    pthread_t thread;
    int interval = 1;
    pthread_create(&thread, NULL, do_smth_periodically, &interval);
    pthread_join(thread, NULL);
    return 0;
}
