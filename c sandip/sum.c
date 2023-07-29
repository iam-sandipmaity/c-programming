#include<stdio.h>
/* 
It is A simple code to add, different, divide and multiply to any two number.
Here All the Values Are inputed by The user.
*/
int main() {
    int  a, b;
    printf("Enter The VAlue OF a  : ");
    scanf("%d", &a);
    printf("Enter The VAlue OF b  :  ");
    scanf("%d", &b);
  
    printf("The Sum Is  :  %d  \n", a+b);
    printf("The different Is  :  %d  \n", a-b);
    printf("The Product Is  :  %d  \n", a*b);
    printf("The Divition Is  :  %f  \n", (float)a/b);
    printf("The Remainder Of %d and %d Is : %d ",a,b,a%b);
    return 0;
}

