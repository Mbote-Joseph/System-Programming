/*Oliver Mugambi SCT211-0320/2018 CAT 2 Q-2*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    // Specify k as 10
    int k = 10;
    // Allocate space for k integers dynamically
    int *ptr = (int *)malloc(k*sizeof(int));
// Out pute results
    printf("Created k=10 memory spaces for integers in heap memory. \n");
    free(ptr);
}