// sum of the first n natural number

#include<stdio.h>
int sum(int n);

int main() {
    printf("Sum Is : %d \n",sum(6));
    // int n;
    // printf("Enter Number : ");
    // scanf("%d",&n);
    // printf("Sum Is : %d \n",sum(n) );
    return 0;
}

int sum(int n) {
    if(n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sum(n-1) + n;
    return sumN;
}