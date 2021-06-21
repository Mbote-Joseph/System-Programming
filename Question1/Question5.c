#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, k, sum = 0;
    float SD = 0.0, variance;
    printf("Enter the number of elements :\n");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    int *s = (int *)malloc(sum * sizeof(sum));

    float *sd = (float *)malloc(SD * sizeof(float));

    printf("Enter %d elements \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Enter the number of elements to add:\n");
    scanf("%d", &k);

    // using realloc to change size of ptr
    ptr = (int *)realloc(ptr, (n + k) * sizeof(int));

    printf("Enter %d more integers \n", k);

    for (int i = n; i < n + k; i++)
    {
        scanf("%d", ptr + i);
    }

    //sum

    for (int i = 0; i < n + k; i++)
    {
        *s += *(ptr + i);
    }
    // mean
    float mean = *s / (float)(n + k);

    //variance
    for (int i = 0; i < n; i++)
    {
        variance += pow(*(ptr + i) - mean, 2);
    }

    *sd = sqrt(variance / (float)(n + k));

    printf("Sum = %d\n", *s);
    printf("Mean = %f\n", mean);
    printf("SD = %f\n", *sd);
}