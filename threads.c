#include <pthread.h>
#include <stdio.h>

void *printHello(void *arg) {
    int hid = *((int *)arg);
    printf("hello hid: %d\n", hid);
    pthread_exit(NULL);
}

// gcc ./threads.c -l pthread -o out && ./out
int main() {
    int numThreads = 20;
    int hids[numThreads];
    pthread_t threadStatus[numThreads];

    for (int i = 0; i < numThreads; i++) {
        hids[i] = i;
        pthread_create(&threadStatus[i], NULL, printHello, (void *)&hids[i]);
    }
    pthread_exit(NULL);
}
