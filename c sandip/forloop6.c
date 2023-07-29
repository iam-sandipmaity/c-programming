// Print The first n natural number and then Print The reverse also.


#include<stdio.h>
int main() {
    int n;
    printf("Enter Number  :  ");
    scanf("%d", &n);

    // for(int i=1; i<=n; i++) {
    //     printf(" %d \n", i);
    // }
    //  for(int j=n; j>=1; j--) {
    //     printf(" %d \n", j);
    // }
    for(int i=1,j=n ;i<=n && j>=1; i++, j--) {
        printf("%d \n", i);
        printf("%d \n", j);
    }
    return 0;
}