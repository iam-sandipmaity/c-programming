//Write A program to print the address of a variable. use this address to get the value of this variable.

#include<stdio.h>

int main() {
    int a=45;
    int *ptr;  // here 'a' is a veriable and 'ptr' is an pointer Wher we store the address of a
    ptr=&a;
    printf("The Adress Of a Is : %u \n", &a); // &a is declare the address of a
    printf("The Adress Of a Is : %u \n", ptr);  // In 'ptr' we store address of a So 'ptr'  is the addrees of a  
    printf("The Value Of a Is : %d \n", *(&a));  //&a is the address of a And * declare any veriable value. so *(&a) declare that the value at address of a
    printf("The Value Of a Is : %d \n", *ptr);  //In 'ptr' we store address of a So 'ptr' value is the value of a 
    
    return 0;
}