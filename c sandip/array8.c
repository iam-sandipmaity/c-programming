// Arrays To Function
#include<stdio.h>
// void PrintArray(int *ptr, int n) {
//     for(int i=0 ; i<n ; i++) {
//         printf("The Value Of Element %d  Is  %d \n",i+1,*(ptr+i));
        
//     }
// }

// void PrintArray(int ptr[], int n) {
//     for(int i=0 ; i<n ; i++) {
//         printf("The Value Of Element %d  Is  %d \n",i+1,*(ptr+i));
        
//     }
// }

void PrintArray(int ptr[], int n) {
    for(int i=0 ; i<n ; i++) {
        printf("The Value Of Element %d  Is  %d \n",i+1,ptr[i]);
        
    }
    ptr[2]=3654;  // This Will Change The Value In Main Fanction
}

int main() {
    int arr[]={1,5,6,9,8,7,3,6,9,7};
    PrintArray(arr, 7);
    printf("%d\n",arr[2]);
    return 0;
}