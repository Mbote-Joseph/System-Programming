#include <stdio.h>
#include <stdlib.h>

// simple program that allocates memory for k integers
// accept user input and print them on the console
int main()
{
    int i, k;

    printf("Enter the number of integers: \n");
    scanf("%d", &k);

    int *ptr = (int *)calloc(k, sizeof(int));

    if (ptr == NULL)
    {
        printf("No memory to allocate\n");
        exit(1);
    }

    printf("Enter %d integers: \n", k);

    for (i = 0; i < k; i++)
    {

        scanf("%d", ptr + i);
    }

    for (i = 0; i < k; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    free(ptr);
}