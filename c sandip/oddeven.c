// Write Program A Number Is OOD Or EVEN.

#include<stdio.h>
int main() {
    int number;
    printf("Enter A Number :  ");
    scanf("%d", &number);

    if (number > 0) {
        printf(" This Number Is Possitive Number \n");
        if (number % 2 == 0) {
            printf("This Number Is Even \n");
        } else {
            printf("This Number Is Odd \n ");
        }
    } else if (number == 0) {
        printf("Zero IS Not Positive Or Negetive Number \n");

              
    
    }else {
        printf(" This Number is Negetive  Number \n");
        if (number % 2 == 0) {
            printf("This Number Is Even \n ");
        } else {
            printf("This Number Is Even \n");
        }
    }
    return 0;

}