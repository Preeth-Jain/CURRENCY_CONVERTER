#include<stdio.h>
int main(){
    int c;
    float r1;
    printf("\n==============================\n");
    printf("\n      Currency convertor      \n");
    printf("\n==============================\n");
    printf("\n1. INR to USD\n2. INR to EUR\n");
    printf("3. USD to INR\n4. USD to EUR\n");
    printf("5. EUR to INR\n6. EUR to USD\n");
    printf("\n------------------------------\n");
choice:
    printf("\nEnter your choice(1-6): ");
    scanf("%d",&c);
    switch(c){
        case 1:
            printf("\nEnter INR: ");
            scanf("%f",&r1);
            printf("\n------------------------------\n");
            printf("\n%.2f INR = %.2f USD\n",r1,r1/89.58);
            break;
        case 2:
            printf("\nEnter INR: ");
            scanf("%f",&r1);
            printf("\n------------------------------\n");
            printf("\n%.2f INR = %.2f EUR\n",r1,r1/104.89);
            break;
        case 3:
            printf("\nEnter USD: ");
            scanf("%f",&r1);
            printf("\n------------------------------\n");
            printf("\n%.2f USD = %.2f INR\n",r1,r1*89.58);
            break;
        case 4:
            printf("\nEnter USD: ");
            scanf("%f",&r1);
            printf("\n------------------------------\n");
            printf("\n%.2f USD = %.2f EUR\n",r1,r1*0.58);
            break;
        case 5:
            printf("\nEnter EUR: ");
            scanf("%f",&r1);
            printf("\n------------------------------\n");
            printf("\n%.2f EUR = %.2f INR\n",r1,r1*104.89);
            break;
        case 6:
            printf("\nEnter EUR: ");
            scanf("%f",&r1);
            printf("\n------------------------------\n");
            printf("\n%.2f EUR = %.2f USD\n",r1,r1/0.58);
            break;
        default:
            printf("Invalid Choice\n");
            goto choice;
    }
    int c2;
    printf("\n-----------------------------\n");
again:
    printf("\nWant to do it again ?\n1. Yes\n2. No\n");
    scanf("%d",&c2);
    if(c2 == 1) goto choice;
    else if(c2 == 2){
        printf("Ending program\nThank you\n");
        return 0;
    }
    else{
        printf("\nInvalid Choice\nChoose again\n");
        goto again;
    }
}