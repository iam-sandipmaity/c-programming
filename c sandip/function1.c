#include<stdio.h>
void printhello(); //function prototype/ declaretion

int main() {
    printhello();
    printhello();   // function call
    return 0;
}

void printhello() {
    printf("Hello ! \n");
    printf("I Am Sandip Maity \n");  // function definition
}