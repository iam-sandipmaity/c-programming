//write a Program to change the value Of A variable To Ten times of its current value. Write a function and pass the value by referance.

#include<stdio.h>
int Tentimes(int n);

int main() {
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
    Tentimes(a);
    printf("current Value Of a Is  :%d\n",Tentimes(a));
    return 0;
}

int Tentimes(int n) {
    
    return 10*n;
}