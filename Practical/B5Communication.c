// Q. Write a C program to establish two-way communication between parent and child process using pipes.

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd1[2], fd2[2];
    char parent_message[] = "Hello from parent";
    char child_message[] = "Hello from child";
    char buffer[100];

    pipe(fd1);
    pipe(fd2);

    if (fork() == 0) {
        // Child process
        read(fd1[0], buffer, sizeof(buffer));
        printf("Child received: %s\n", buffer);
        write(fd2[1], child_message, strlen(child_message) + 1);
    } 
    else {
        // Parent process
        write(fd1[1], parent_message, strlen(parent_message) + 1);
        read(fd2[0], buffer, sizeof(buffer));
        printf("Parent received: %s\n", buffer);
    }
    return 0;
}


// OUTPUT ---
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ gcc B5Communication.c -o B5Communication
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ ./B5Communication
// Child received: Hello from parent
// Parent received: Hello from child