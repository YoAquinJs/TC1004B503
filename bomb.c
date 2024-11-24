#include <stdio.h>
#include <unistd.h>

// gcc ./bomb.c -o bomb && ./bomb
int main() {
    while (1) {
        int some_variable = 20;
        int pid = fork();
        if (pid == 0) {
            printf("child process a=%d \n", some_variable);
        }
        printf("parent process a=%d \n", some_variable);
        printf("child process pid=%d \n", pid);
    }
    return 0;
}
