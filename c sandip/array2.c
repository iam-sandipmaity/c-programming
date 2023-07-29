// array input using loops

#include<stdio.h>

int main() {
    int Marks[5];

    for(int i=0; i<5;i++) {
        printf("Enter The Value of The The Marks For student %d  :  ",i+1);
        scanf("%d", &Marks[i]);
    }

    for(int i=0;i<5;i++) {
        printf("Mark Of The Student %d Is : %d \n",i+1,Marks[i]);
    }

    return 0;
}