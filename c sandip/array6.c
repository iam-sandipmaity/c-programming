#include<stdio.h>

int main() {
    int a[] = {7,9,2,8,1};
    int *ptr=&a[0];
    ptr+=3;
    printf("\t%d\n",*ptr);
    --ptr;
    printf("\t%d\n",*ptr);
    return 0;
}