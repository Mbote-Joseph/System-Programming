#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    float standard_deviation = 0.0;
    int variance;
    printf("Enter the number of elements :\n");
    scanf("%d", &n);

    int *ptr = (int *)calloc(n, sizeof(int));

    int *s = (int *)calloc(sum, sizeof(int));

    float *sd = (float *)calloc(standard_deviation, sizeof(float));

    printf("Enter %d elements \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        *s += *(ptr + i);
    }

    float mean = *s / (float)n;

    for (int i = 0; i < n; i++)
    {
        variance += pow(*(ptr + i) - mean, 2);
    }

    *sd = sqrt(variance / (float)n);

    printf("Sum = %d\n", *s);
    printf("Mean = %f\n", mean);
    printf("SD = %f\n", *sd);
    free(ptr);
    free(sd);
    free(s);
    return 0;
}