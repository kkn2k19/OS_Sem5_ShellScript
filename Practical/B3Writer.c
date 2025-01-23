// Q. Write two C programs: writer and reader using shared memory to write and read a message.

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>

int main() {
    key_t key = ftok("shmfile",65);
    int shmid = shmget(key,1024,0666|IPC_CREAT);
    char *str = (char*) shmat(shmid,(void*)0,0);
    printf("Enter message: ");
    fgets(str, 1024, stdin);
    shmdt(str);
    return 0;
}


// OUTPUT ---
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ gcc B3Writer.c -o B3Writer       
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ gcc B3Reader.c -o B3Reader
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ ./B3Writer
// Enter message: Hello I am Karan
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ ./B3Reader
// Received message: Hello I am Karan