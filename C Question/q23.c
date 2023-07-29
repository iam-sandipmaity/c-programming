// Write A Function To Calculate The Sum, Product & average of 2 numbers. print That average in The main function.

#include<stdio.h>
void DoWork(int a, int b, int *sum, int *product, int *average);

int main() {
    int a= 3, b=4;
    int sum, product, average;
    DoWork(a,b,&sum,&product,&average);

    printf("Sum Is : %d  ,  Product Is  : %d    &  Average Is   : %d \n",sum,product,average);

    return 0;
}

void DoWork(int a, int b, int *sum, int *product, int *average) {
    *sum = a + b;
    *product = a * b;
    *average = (a + b) / 2;
}