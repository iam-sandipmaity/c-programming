//input by using pointer

#include<stdio.h>

int main() {
    int Marks[6];
    int *ptr;
    ptr=&Marks[0];
    // ptr = &Marks;

   for(int i=0;i<6;i++) {
    printf("Enter The Mark Of The %d student :  ",i+1);
    scanf("%d",ptr);
    ptr++;
   } 

   for(int i=0; i<6 ;i++) {
    printf("Student %d mark Is : %d  \n",i+1, Marks[i]);
   }
    
    return 0;
}