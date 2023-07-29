// Check If A Number Is Natural Or Not.

#include<stdio.h>

int main() {
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);

    if(n >= 1) {
        printf("%d Is An Natural Number \n",n);
    }
    else if (n<1) {
        printf("%d Is Not An Natural Number\n",n);
    }
    else {
        printf("PLEASE ENTER A VALID NUMBER\n");
    }
    return 0;
}