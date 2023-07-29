// Swap a & b
#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main() {
    int x=3,y=4;
    printf("The value Of x & y before swap is %d and %d  \n",x,y);
    // swap(x,y);  //swap will not work due to call by value 
    _swap(&x,&y);  // swap will work due to call by reference
    printf("The value Of x & y after swap is %d and %d  \n",x,y);
    return 0;
}

void swap(int a, int b) {
    int temp=a;
    a=b;
    b=temp;
    
}
void _swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}