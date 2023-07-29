// write A program to creat an array by scanf from user of 10 integers and store multiplication table of 5 in it.

#include<stdio.h>


int main() {
    int arr[10];
    int *ptr = &arr[0];

    for(int i=0;i<10;i++) {
        printf("Enter The Array %d Element : ",i+1);
        scanf("%d",ptr);
    

    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int a= n*arr[i];
    printf("%d\n",a);
    }

    
    return 0;
}
