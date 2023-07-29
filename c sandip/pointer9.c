// Write a program to change the value of a variable to ten tiems of its current value. 
//using call by value and verify that it doesn't change the value of the said variable.

#include<stdio.h>
int Tentimes(int n);

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("The Value Of the n is : %d \n",n);
    Tentimes(n);
    printf("Current Value Of %d Is : %d \n",n,Tentimes(n) ); 
    printf("The Value Of the n is : %d \n",n);
    return 0; 
    
    // here n value does not change only it reflect to the variable value.
    //entered by the user n value copy to the function and it only change the value of fanction.
}


int Tentimes(int n) {
    return n*10;
}
