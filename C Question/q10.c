/* Write A Program To Check If A Student Passed Or Faild.
   marks > 30 is PASS
   marks <= 30 is FAIL
*/

#include<stdio.h>
int main () {
    int mark ;
    printf("Enter Your Mark  :  ");
    scanf("%d", &mark);

    if (mark >= 0 && mark <=30 ) {
        printf("You FAIL \n");
    } else if (mark > 30 && mark <= 100 ) {
        printf("You Are PASS \n");
    } else {
        printf("Not A Valid Mark ");
    }
    return 0;
}