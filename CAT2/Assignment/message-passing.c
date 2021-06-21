// Mbogo Joseph Mbote : Question 1 b) : SCT211-0011/2018

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX 10

// structure for message queue which contains message type and array of charater
struct message_buffer {
	long message_type;
	char message_text[100];
} message;

int main(void)
{
	key_t key;
	int msgid;

	// ftok to generate unique key
	key = ftok("progfile", 65);

	// msgget creates a message queue
	// and returns identifier
	msgid = msgget(key, 0666 | IPC_CREAT);
	message.message_type = 1;

	printf("Write Data : ");
	fgets(message.message_text,MAX,stdin);

	// msgsnd to send message
	msgsnd(msgid, &message, sizeof(message), 0);

	// display the message
	printf("Data send is : %s \n", message.message_text);


}
