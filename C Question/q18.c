// use library functions to calculate the square of a number given by user

#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("Enter A number :  ");
    scanf("%d", &n);

    printf("%f \n", pow(n,2) );
    return 0;
}