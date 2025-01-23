// Q. Write a C program to create an orphan process.

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        // Parent process
        printf("Parent process exiting...\n");
    } 
    else if (pid == 0) {
        // Child process
        sleep(5);
        printf("Child process running, PID: %d\n", getpid());
        printf("New Parent PID: %d\n", getppid());
    } 
    else {
        printf("Fork failed!\n");
    }
    return 0;
}


// OUTPUT ---
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ gcc B2Orphan.c -o B2Orphan       
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ ./B2Orphan
// Parent process exiting...
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ Child process running, PID: 1332
// New Parent PID: 290