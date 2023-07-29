// Write 2 Functions - One to Print "Hello"  &  Second To Print "Good Bye".


//function prototype/declaretion
#include<stdio.h>
void printHello();
void printGoodbye();

//function call
int main() {
    printHello();
    printGoodbye();
    printHello();
    return 0;
}

// function definition
void printHello(){
    printf("Hello! \n");
}
void printGoodbye() {
    printf("Good Bye \n");
}