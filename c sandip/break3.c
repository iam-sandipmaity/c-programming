// Keep Taking Number From User As Input untill User Enters A Number Which Is Multiple Of 7.

#include<stdio.h>
int main() {
    int n;
    do{
        printf("Enter Number  :  ");
        scanf("%d", &n);
        printf("You Entered %d \n", n);
        if(n % 7 == 0) {
            break;
        }

    } while(1);
    printf("Thank You \n");
    return 0;
}