#include<stdio.h>

int main(void){
    int a,b,c, average;
    char grade;
    printf("Enter number 1 :\n ");
    scanf("%d", &a);
    printf("Enter number 2 : \n ");
    scanf("%d", &b);
    printf("Enter number 3 : \n");
    scanf("%d", &c);
     
     average=(a +b+c)/3;
     if(average>=80 && average<=100){
         grade='A';
         printf("The grade is : %c", grade);
     }else if(average>=70 && average<80){
         grade='B';
         printf("The grade is : %c", grade);
     }else if(average>=60 && average<70){
         grade='C';
         printf("The grade is : %c", grade);
     }else if(average>=50 && average<60){
         grade='D';
         printf("The grade is : %c", grade);
     }else if(average>=40 && average<50){
         grade='E';
         printf("The grade is : %c", grade);
     }else if(average>=0 && average<40){
         grade='F';
         printf("The grade is : %c", grade);
     }else{
         printf("Invalid grade\n");
     }

}
