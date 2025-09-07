
#include <stdio.h>
int main() {
    int choice;
    float inr;


    printf("1. INR to USD\n2.Inr to WON\n3.INR to POUND\n");
    printf("Enter your choice please\n");
    scanf("%d", &choice);


    printf("Enter amount in inr\n");
    scanf("%f", &inr);
    switch (choice) {
        case 1 : printf("USD = %2f\n", inr*0.012); break;
        case 2: printf("WON= %2f\n", inr*16.57);break;
        case 3: printf("POUND= %2f\n",inr*0.0097);break;
        default:printf("oopsie wrong choice\n");

    }
        return 0;
}