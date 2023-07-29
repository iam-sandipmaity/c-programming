// Swap 2 numbers a &b.

#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);


int main() {
    int x=4,y=6;
    _swap(&x,&y);
    printf("x = %d  & y = %d \n ",x,y);

    return 0;
}
// call by refereence
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    

}



// call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("a = %d  & b = %d \n ",a,b);
}