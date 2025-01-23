// Q. Write a c program to create a process using fork system call and display the information : PID, PPID, Return of fork().

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;
    pid = fork();

    if (pid < 0) {
        printf("Fork failed!\n");
        return 1;
    } 
    else if (pid == 0) {
        // Child process
        printf("Child Process: \n");
        printf("PID: %d\n", getpid());
        printf("PPID: %d\n", getppid());
    } 
    else {
        // Parent process
        printf("Parent Process: \n");
        printf("PID: %d\n", getpid());
        printf("Child PID (Return of fork): %d\n", pid);
    }
    return 0;
}


// OUTPUT ---
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ gcc B1ForkSystemCall.c -o B1ForkSystemCall                                                                                                               
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ ./B1ForkSystemCall
// Parent Process: 
// PID: 1297
// Child PID (Return of fork): 1298
// Child Process:
// PID: 1298
// PPID: 290