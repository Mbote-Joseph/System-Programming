#include<stdio.h>

int main(void){
    printf("1. 20MBs @20ksh .");
    printf("\n2. 50MBs @20ksh for 1 hour.");
    printf("\n3. 100MBs @50ksh for 2 hours.");
    printf("\n4. 1GB  @2ksh for 1 minute.");

    int selection;
    printf("\nEnter your choice: ");
    scanf("%d",&selection);

    switch (selection)
    {
    case 1:
        printf("\n1. Mpesa.");
        printf("\n2.Airtime");
        printf("\n3. Bonga points");
        

    case 2:
        printf("\n1. Mpesa.");
        printf("\n2.Airtime");
        printf("\n3. Bonga points");
        break;
    default:
        printf("Invalid choice");
        printf("\n1. 20MBs @20ksh .");
        printf("\n2. 50MBs @20ksh for 1 hour.");
        printf("\n3. 100MBs @50ksh for 2 hours.");
        printf("\n4. 1GB  @2ksh for 1 minute.");

        int selection;
        printf("\nEnter your choice: ");
        scanf("%d",&selection);
        break;
    }

}