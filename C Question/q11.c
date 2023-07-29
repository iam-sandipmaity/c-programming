/* Write A Program To Give Grade To A Student 
 marks < 30 is C
 30 <= marks < 70 B
 70 <= marks < 90 A
 90 <= marks <= 100 A+ 
*/

#include<stdio.h>
int main () {
    int mark ;
    printf("Enter Your Mark (0-100) :  ");
    scanf("%d", &mark );

    if (mark >= 0 && mark < 30) {
        printf("Your Grade IS C \n");
    } else if (mark >= 30 && mark < 70) {
        printf("Your Grade IS B \n");
    } else if (mark >= 70 && mark < 90) {
        printf("Your Grade IS A");
    } else if (mark >= 90 && mark <= 100 ) {
        printf("Your Grade IS A+");
    } else {
        printf("PLEASE INPUT A VALID NUMBER! ");
    }
    return 0;

}