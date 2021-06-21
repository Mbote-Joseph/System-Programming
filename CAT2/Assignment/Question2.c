// Mbogo Joseph Mbote : Question 2 : SCT211-0011/2018

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
     int i, size;

    printf("Enter the number of integers: \n");
    scanf("%d", &size);

    // Allocating the memory dynamically
    int *ptr = (int *)calloc(size, sizeof(int));

    if (ptr == NULL)
    {
        printf("No memory to allocate\n");
        exit(1);
    }

    printf("Enter %d integers: \n", size);

    for (i = 0; i < size; i++)
    {

        scanf("%d", ptr + i);
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    free(ptr);
}