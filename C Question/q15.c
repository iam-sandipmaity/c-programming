// print the factorial of a number n

#include<stdio.h>
int main() {
    int n ;
    printf("Enter Number : ");
    scanf("%d",&n);
     
    int factorial = 1; 
    for(int i=1; i<=n ; i++) {
        factorial = factorial * i;
    }
    printf("The factorial Is  : %d \n", factorial);
    return 0;


}