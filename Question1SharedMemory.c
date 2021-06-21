/*Oliver Mugambi SCT211-0320/2018 CAT 2 Q-1a*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <sys/wait.h>

#define SHM_SIZE 2048 /* make it a 1K shared memory segment */

int main(int argc, char *argv[])
{
    key_t key;
    int shmid;
    char *data;
    int mode;

    if (argc > 2)
    {
        fprintf(stderr, "usage: shmdemo [data_to_write]\n");
        exit(1);
    }

    /* make the key: */
    if ((key = ftok("shfile.txt", 'W')) == -1) /*Here the file must exist */
    {
        perror("ftok");
        exit(1);
    }

    /*  create the segment: */
    if ((shmid = shmget(key, SHM_SIZE, 0644 | IPC_CREAT)) == -1)
    {
        perror("shmget");
        exit(1);
    }

    /* attach to the segment to get a pointer to it: */
    data = shmat(shmid, NULL, 0);
    if (data == (char *)(-1))
    {
        perror("shmat");
        exit(1);
    }
    int cid = fork();
    if(cid < 0) //fork failed
    {
        printf("fork failed\n");
        return 1;
    } else if(cid == 0) //in child process
    {
        /* read or modify the segment, based on the command line: */
        if (argc == 2)
        {
            printf("Child writing to segment: \"%s\"\n", argv[1]);
            strncpy(data, argv[1], SHM_SIZE);
        }
        else
            printf("segment contains: \"%s\"\n", data);
        
    } else
    {
        wait(NULL); //wait until child process is done
        // Let the parent write something
        printf("Parent writing to segment: Oliver\n");
        strncpy(data, "Oliver", SHM_SIZE);
        printf("segment now contains: \"%s\"\n", data);
        /* detach from the segment: */
        if (shmdt(data) == -1)
        {
            perror("shmdt");
            exit(1);
        }
    }
    
    

    

    return 0;
}