#include<stdio.h>
#include<stdlib.h>

int main(void){
    char firstName[12];
    char secondName[12];

    printf("Enter your first name : ");
    scanf("%s", firstName);

    printf("Enter your first name : ");
    scanf("%s", secondName);

    printf("Your full Name is : %s " " %s \n" , firstName, secondName);
}