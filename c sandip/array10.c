// Creat A 2-D Array by taking input from the user. Write a display function to print the content of this 2-D array on the screen.

#include<stdio.h>

int main() {
    int student=2;
    int subject=3;
    int Marks[2][3];

    for(int i=0;i<student;i++) {
        for(int j=0; j<subject;j++) {
            printf("Enter the Mark Of The %d Sudent In %d Subject : ",i+1,j+1);
            scanf("%d",&Marks[i][j]);
        }
    }
    
    for(int i=0;i<student;i++) {
        for(int j=0; j<subject;j++) {
            printf("{ %d   %d } \n",*Marks[i],*Marks[j]);
            
        }
    }

    return 0;
}