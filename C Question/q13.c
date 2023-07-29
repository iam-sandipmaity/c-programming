// print the table of a number input by the user.

#include<stdio.h>
int main() {
    int n;
    printf("Enter Number  : ");
    scanf("%d", &n);

    for(int i=1; i<=10 ;i++) {
        printf("%d \n", i*n);
    }
    return 0;
}