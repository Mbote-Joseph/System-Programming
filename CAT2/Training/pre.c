#include<stdio.h>

int main(void){
    int a=10;
    int c=++a;
    int b=a++;
    

    printf("A = %d\n",a);
    printf("B = %d\n",b);
    printf("C = %d\n",c);
}