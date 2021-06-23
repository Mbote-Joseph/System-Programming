// Mbogo Joseph Mbote : Question 3  : SCT211-0011/2018
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    int n,sum=0;
    float standardDeviation =0.0, variance;
    printf("Enter the number of elements you want to enter :\n");
    scanf("%d",&n);

    int *items = (int *)malloc(n*sizeof(int));

    int *total = (int *)malloc(sum*sizeof(sum));

    float *std_dev = (float *)malloc(standardDeviation*sizeof(float));

    printf("Enter %d elements : \n",n);
    for(int i =0;i<n;i++){
        scanf("%d",items+i);
    }

    for(int i = 0; i<n; i++){
        *total += *(items+i);
    }
    // Calculate the mean
    float mean = *total/(float)n;
    // Calculate the variance
    for(int i=0; i<n;i++){
        variance += pow(*(items+i) - mean, 2);
    }
    // Calculate the standard deviation
    *std_dev = sqrt(variance/(float)n);
    // Print the calculated values
    printf("Sum = %d\n",*total);
    printf("Mean = %f\n",mean);
    printf("Standard Deviation = %f\n",*std_dev);
    // The memory being destored
    // Free all allocated heap memory
    free(items);
    free(total);
    free(std_dev);


    
} 