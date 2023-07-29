/*Print 1 (true) 0 (flase) for the following statements.
If It's Monday or raining -> true
*/
#include<stdio.h>
int main() {
    int isMonday = 1 , isRaining = 0 ;
    printf("%d \n", isMonday || isRaining );
    return 0;
    // output = 1 ->true
}