// Calculate The Sum Of All Numbers Between 5 and 50. (including 5 and 50)

#include<stdio.h>
int main() {
    int sum = 0;
    for(int i=5; i<=50; i++ ) {
        sum += i ;
    }
    printf("The Total Sum Is : %d \n", sum);
    return 0;
}