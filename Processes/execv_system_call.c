#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

    pid_t pid;

    // First Child Process
    pid = fork();

    if (pid == 0) {

        printf("Executing ls on /bin directory\n");

        char *args[] = {"ls", "/bin", NULL};

        execv("/bin/ls", args);

        perror("execv failed");
        exit(1);
    }

    wait(NULL);

    // Second Child Process
    pid = fork();

    if (pid == 0) {

        printf("Executing ls on /home directory\n");

        char *args[] = {"ls", "/home", NULL};

        execv("/bin/ls", args);

        perror("execv failed");
        exit(1);
    }

    wait(NULL);

    return 0;
}