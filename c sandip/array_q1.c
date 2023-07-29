// Creat an array of 10 numbers. verify using pointer arithmetic that (ptr+2) points to the third element, where ptr is a pointing to the first element of the array.

#include<stdio.h>

int main() {
    int a[10] ={5,6,4,8,9,7,9,8,3,1}; // a[10] is an 10 numbers array

    // int *ptr=&a[0];
    int *ptr=a;
   
    ptr+=2;
    if(ptr == &a[2]) {
        printf("These Points To The Same Location In Memory \n");
    } else{
        printf("These did not Points To The Same Location In Memory \n");
    }
    
    // printf("The Value Of ptr Is Before pointer arithmetic : %d \n",*ptr);
    // ptr+=2;
    // printf("The Value Of ptr Is Before pointer arithmetic : %d \n",*ptr);
    // return 0;
}