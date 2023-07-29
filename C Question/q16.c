// Print The Reverse Of The Table For A Number n.

#include<stdio.h>
int main() {
    int n;
    printf("Enter The number : ");
    scanf("%d", &n);

    for(int i=10; i>=1; i--) {
        printf("%d \n", n*i);
    }
    return 0;
}