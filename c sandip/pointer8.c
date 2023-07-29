// Write A Program To Print The Value Of A Variable "i" by using "pointer to pointer" type of variable.

#include<stdio.h>

int main() {
    int i=4;
    int *ptr;
    int **pptr;

    ptr=&i;
    pptr=&ptr;

    printf("The Value Of The Variable i Is : %d \n ",**pptr);  //**pptr is pointer to pointer variable it store ultimately to i.
    
    return 0;
}