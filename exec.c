#include <stdio.h>
#include <unistd.h>

// gcc ./exec.c -o exec
int main() {
    int pid = fork();
    if (pid == 0) {
        printf("chid process \n");
        execl("./hello", "arg1", "arg2", "arg3", (char *)NULL);
        printf("shouldn't be executed");
    }
    printf("parent process\n");
    return 0;
}
