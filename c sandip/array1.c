#include<stdio.h>

int main() {
    int Mark[4];  // alocate  space for 4 integer
    printf("Enter Your 1st Mark : ");
    scanf("%d", &Mark[0]);
    printf("Enter Your 2st Mark : ");
    scanf("%d", &Mark[1]);
    printf("Enter Your 3st Mark : ");
    scanf("%d", &Mark[2]);
    printf("Enter Your 4st Mark : ");
    scanf("%d", &Mark[3]);

    printf("You Have Entered %d,  %d,  %d  &  %d \n",Mark[0],Mark[1],Mark[2],Mark[3]);

    return 0;
}