//Armstrong Number

#include<stdio.h>

int main() {
    int n ,  arm = 0 , r;
    printf("Enter A Number :  ");
    scanf("%d",&n);
    int a = n;
    while (n > 0) {
        r = n % 10; 
        arm += r*r*r;
        n = n/10;

    }
    if (a == arm) {
        printf("%d Is An Armstrong Number \n",a);
    } else{
        printf("%d Is Not An Armstrong Number \n",a);

    }
    return 0;
}