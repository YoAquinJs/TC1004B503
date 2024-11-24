#include <stdio.h>
#include <unistd.h>

// gcc ./fork.c -o fork
int main() {
    int some_variable = 20;
    int pid = fork();
    if (pid == 0) {
        printf("child process a=%d \n", some_variable);
        sleep(20);
        return 0;
    }
    printf("parent process a=%d \n", some_variable);
    printf("child pid pid=%d \n", pid);
    sleep(2);

    return 0;
}
