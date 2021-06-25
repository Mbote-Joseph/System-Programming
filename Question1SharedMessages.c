
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX 15

//this is the structure of the message i'm sending to the queue
struct mesg_buffer
{
    long message_type;
    char message_text[100];
}message; 

int main()
{

   
	key_t f_key;
	int msgid;

	// ftok to generate unique key
	f_key = ftok("progfile", 65);

	// msgget creates a message queue
	// and returns identifier
	msgid = msgget(f_key, 0666 | IPC_CREAT);
	message.message_type = 1;
    printf("Write Data in parent process : ");
    fgets(message.message_text,MAX,stdin);
    // msgsnd to send message
    msgsnd(msgid, &message, sizeof(message), 0);

    pid_t parentpid = getpid();
    pid_t childpid = fork(); //these are mostly unused for now
    if(childpid < 0) //fork failed
    {
        printf("fork failed\n");
        return 1;
    } else if(childpid == 0) //in child process
    {
        printf("Write Data in child process : ");
        fgets(message.message_text,MAX,stdin);

        // msgsnd to send message
        msgsnd(msgid, &message, sizeof(message), 0);

        // display the message
        printf("Data send is : %s \n", message.message_text);
        msgrcv(msgid, &message, sizeof(message.message_text), 1, 0);
        printf("Child recieved message text : %s\n", message.message_text);
        
    } else
    {
        wait(NULL); //wait until child process is done
        //Receive data in parent from child
        msgrcv(msgid, &message, sizeof(message.message_text), 1, 0);
        printf("Parent recieved message text (from child) : %s\n", message.message_text);
        message.message_type = 2; //change the message type here
        printf("Write Data in parent process : ");
        fgets(message.message_text,MAX,stdin);

        // msgsnd to send message
        msgsnd(msgid, &message, sizeof(message), 0);
        //Receive data in parent
        msgrcv(msgid, &message, sizeof(message.message_text), 1, 0);
        printf("Parent recieved message text : %s\n", message.message_text);
    }
    return 0;
}