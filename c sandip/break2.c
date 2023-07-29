// Keep Taking Number From User Untill User Enter An Odd Number

#include<stdio.h>
int main() {
    int n;
    do{
        printf("Enter Number : ");
        scanf("%d", &n);
        printf("You Enter %d \n", n);
       

        if(n % 2 != 0) {
            break;
        }

    } while(1); // here 1 -> true symbolised. so for all condition The above expression is true.
    printf("Thank You \n");
    return 0;
}