/*Print 1 (true) 0 (flase) for the following statements.
If It's Sunday & sniwing -> true
*/

#include<stdio.h>
int main () {
    int isSunday = 1, isSnowing = 1;
    // As the day is sunday and snowing so isSanday &isSnowing this two veriable value is 1
    printf("%d", isSunday && isSnowing );
    return 0;
    //True -> 1

}