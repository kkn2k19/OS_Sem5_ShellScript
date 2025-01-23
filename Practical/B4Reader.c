// Q. Write two C programs: writer and reader using message passing technique to write and read messages.

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct msg_buffer {
    long msg_type;
    char msg_text[100];
} message;

int main() {
    key_t key = ftok("progfile", 65);
    int msgid = msgget(key, 0666 | IPC_CREAT);
    msgrcv(msgid, &message, sizeof(message), 1, 0);
    printf("Received message: %s", message.msg_text);
    msgctl(msgid, IPC_RMID, NULL);
    return 0;
}
