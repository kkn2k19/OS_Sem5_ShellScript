// Q. Write two C programs: writer and reader using message passing technique to write and read messages.

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

struct msg_buffer {
    long msg_type;
    char msg_text[100];
} message;

int main() {
    key_t key = ftok("progfile", 65);
    int msgid = msgget(key, 0666 | IPC_CREAT);
    message.msg_type = 1;
    printf("Enter message: ");
    fgets(message.msg_text, 100, stdin);
    msgsnd(msgid, &message, sizeof(message), 0);
    printf("Message sent successfully.\n");
    return 0;
}

// OUTPUT ---
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ gcc B4Writer.c -o B4Writer       
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ gcc B4Reader.c -o B4Reader       
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ ./B4Writer
// Enter message: Hello I am Karan
// Message sent successfully.
// kkn2k19@Karan:/mnt/c/Users/karan/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical$ ./B4Reader
// Received message: Hello I am Karan