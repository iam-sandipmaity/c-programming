
// Write A Program To Check If a number is divisible by 2 or not.

#include<stdio.h>
int main() {
    int x;
    // Here x is inputed by the user
    printf("Enter A Number : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
    /*
    If The Output will 1 Then x is divisible by 2
    otherwise if the output come 0 then x can not divisible by 2
    */
}