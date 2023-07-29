#include<stdio.h>
int main() {
    int age ;
    printf("Enter Your Age : ");
    scanf("%d", &age);

    (age <= 18 ) ? printf("Yopu Are Not An Adult \n") :  printf("You Are An Adult \n");
    return 0;
}