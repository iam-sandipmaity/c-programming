// factoril of n

#include<stdio.h>
int fact(int n); 
int main(){
    int n;
    printf("Entre Number : ");
    scanf("%d",&n);
    printf("Factorial Is : %d \n", fact(n));
    return 0;

}

int fact(int n) {
    if (n==1) {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = fact(n-1) *n ;
    return factN;

}