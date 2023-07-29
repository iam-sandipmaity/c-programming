// Write A program to decleare Leep Year 

#include<stdio.h>
int main () {
    int year;
    printf("Enter The Year :  ");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 == 0) {
        if(year % 400 == 0) {
            printf("%d Year Is An LeepYear \n",year);
        }
        else {
            printf("%d Year Is Not An LeepYear \n",year);
        }
    } else if (year % 4 == 0 && year % 100 != 0) {
        printf("%d Year Is An LeepYear \n",year);
    } else{
        printf("%d Year Is Not An LeepYear \n",year);
    }
    return 0;
}
