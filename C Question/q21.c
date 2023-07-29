// Write A function To print n terms of the fibonacci sequence
#include<stdio.h>
int fib(int n);

int main() {
    int n;
    printf("Enter The n : ");
    scanf("%d",&n);
    printf("Fibnacci of nth term Is :  %d \n", fib(n));   // this line send us the nth term fibonacci function value
    fib(n);
    return 0;
}

int fib(int n) {
    if(n == 0){
        return 0;
    } 
    if (n== 1) {
        return 1;
    }
    int fibNm1 = fib (n-1);
    int fibNm2 = fib (n-2);
    int fibN = fibNm1 + fibNm2;
    printf("fib of %d Is : %d\n", n,fibN);
    return fibN;
}