// Write A Program to Check If A Number Is Odd Or Even.

#include<stdio.h>
int main () {
    int x;
    printf("Enter A Number : ");
    scanf("%d", &x);
    printf("%d \n", x % 2 == 0 );
    return 0;
    /*
    even -> 1
    odd -> 0
    */
}