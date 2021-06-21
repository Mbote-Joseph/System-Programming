// Mbogo Joseph Mbote : Question 1 a) : SCT211-0011/2018
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>


int main(void)
{
	// ftok to generate unique key
	key_t key = ftok("shmfile",65);

	// shmget returns an identifier in shmid
	int shmid = shmget(key,1024,0666|IPC_CREAT);

	// shmat to attach to shared memory to the pointer str
	char *str = (char*) shmat(shmid,(void*)0,0);

	printf("Write Data: ");
	scanf("%s",str);
	

	printf("Data read from memory that is shared: %s\n",str);
	
	//detach from shared memory
	shmdt(str);
	
	// destroy the shared memory
	shmctl(shmid,IPC_RMID,NULL);
	

}
