#include<stdio.h>
int main () {
    int num1 , num2 ,num3 ,num4;
    printf(" Enter  num1 :  ");
    scanf("%d",&num1);
    printf(" Enter  num2 :  ");
    scanf("%d",&num2);
    printf(" Enter  num3 :  ");
    scanf("%d",&num3);
    printf(" Enter  num4 :  ");
    scanf("%d",&num4);
   
    if(num1-num2>0) {
        if(num1-num3>0) {
            if(num1-num4>0) {
                printf("%d Is The Greatest Number \n",num1);
            } else {
                printf("%d Is The Greatest Number \n",num4);
            }
        } else if(num3-num4>0) {
            printf("%d Is The Greatest Number \n",num3);
        } else {
            printf("%d Is The Greatest Number \n",num4);
        }
    } else if(num2-num3>0) {
        if(num2-num4>0) {
            printf("%d Is The Greatest Number \n",num2);
        } else {
            printf("%d Is The Greatest Number \n",num4);
        }
    } else if(num3-num4>0) {
        printf("%d Is The Greatest Number \n",num3);
    } else {
        printf("%d Is The Greatest Number \n",num4);
    }
    
    return 0;
}