/*Print 1 (true) 0 (flase) for the following statements.
If a number is greather than 9 and less than 100 -> true
*/
#include<stdio.h>
int main () {
    int x;
    printf("Enter A Number : ");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100 );
    return 0;
    // If output is 1 then the number will in 9<x<100 and if the output is 0 then x will stay in any range acept 9 to 100
}