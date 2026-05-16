#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

    pid_t pid = fork();

    // Check if fork failed
    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }

    // Child Process
    else if (pid == 0) {

        printf("Child Process (PID: %d):\n", getpid());

        for (int i = 0; i <= 9; i++) {
            printf("%d ", i);
        }

        printf("\n");
        exit(0);
    }

    // Parent Process
    else {

        wait(NULL);

        printf("Parent Process (PID: %d):\n", getpid());

        for (char c = 'a'; c <= 'z'; c++) {
            printf("%c ", c);
        }

        printf("\n");
    }

    return 0;
}