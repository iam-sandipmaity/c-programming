//  Multidimension Array 

#include<stdio.h>

int main() {
    int student = 3;
    int subject = 6;

    int Marks[3][6];
    for(int i=0;i<student;i++) {
        for(int j=0;j<subject;j++) {
            printf("Entre The Marks Of %d Student In %d Subject :  ",i+1,j+1);
            scanf("%d",&Marks[i][j]);
        }
    }
    for(int i=0;i<student;i++) {
        for(int j=0;j<subject;j++) {
            printf("Entre The Marks Of %d Student In %d Subject Is : %d \n",i+1,j+1,Marks[i][j]);
        }
    }    
    return 0;
}