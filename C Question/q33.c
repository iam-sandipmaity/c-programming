// print a number is prime number or not
#include<stdio.h>

int main() {
    int n, c = 0;
    printf("Enter The Number : ");
    scanf("%d",&n);
    for(int i = 2 ; i <= n ; i++) {
        if (n % i == 0) {
            c++;
        }
    }
    printf("**************************************************\n");
    printf("**************************************************\n");
    printf("**************************************************\n");
    if (c== 1) {
        printf("\t%d Number Is An Prime Number \n",n);
    } else {
        printf("\t%d Number Is Not An Prime Number \n",n);
    }
    printf("**************************************************\n");
    printf("**************************************************\n");
    printf("**************************************************\n");
    return 0;
}