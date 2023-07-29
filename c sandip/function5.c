// make a Table of n number

#include<stdio.h>
void printTable(int n);

int main() {
    int n;
    printf("Enter A Number :  ");
    scanf("%d", &n);

    printTable(n);   //n-> argument / actual parameter

    return 0;

}

void printTable(int n) {   // n-> parameter / formal parameter
    for(int i=1 ; i<= 10 ; i++){
        printf("%d \n",n*i);
    }

}