//Write A Program containing a function Which reverse the array passed to it.

#include<stdio.h>
void reverse(int *arr ,int n);
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    reverse(arr,7);
    for(int i=0; i<7 ; i++) {
        printf("The Value Of %d Element Is  : %d \n",i,arr[i]);
    }
    return 0;
}

void reverse(int *arr ,int n) {
    int temp;
    for(int i=0 ; i< n/2 ; i++) {
        temp=arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}