// Write a Program to print the average of 3 numbers.
#include<stdio.h>
int main() {
    int a , b , c ;
    printf("Enter The Value of a : ");
    scanf("%d", &a);
    printf("Enter The Value of b : ");
    scanf("%d", &b);
    printf("Enter The Value of c : ");
    scanf("%d", &c);
    printf("The Average of 3 Number Is  :  %f \n", ((a+b+c)/3.0));
    return 0;
}