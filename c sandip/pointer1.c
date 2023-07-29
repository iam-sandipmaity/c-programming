#include<stdio.h>

int main() {
    int i=34;
    int*j=&i; // j will now store the address of i
    printf("The Value Of i Is : %d \n",i);
    printf("The Value Of i Is : %d \n",*j);
    printf("The Address Of i Is : %u \n",&i);
    printf("The Address Of i Is : %u \n",j);
    printf("The Address Of j Is : %u \n",&j);
    printf("The Value Of  j Is : %u \n",*(&j));
    return 0;
}