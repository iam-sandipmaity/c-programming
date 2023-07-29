// Write A Program having a variable "i". print The adress of "i". pass this variable to a function and print its adress. are these addresses same? Why?

#include<stdio.h>
void store(int b);
int main() {
    int a =3;
    //address of i is ->
    printf("The Value of a Is :  %d \n",a);
    store(a); 
    printf("The Address of a Is :  %u \n",&a);

    return 0;
}

void store(int b ) {
    printf("The Address of b Is :  %u \n" , &b);

}

// No These Values Are Not Same .
//because  main function  occupy a different address and created function also occupy a different address in memory. so there address are not same.