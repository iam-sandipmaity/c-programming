// Write A Program To find If A Charecter Entered By The User Is Upper Case Or Not.

#include<stdio.h>
int main () {
    char ch ; // ch -> Charecter
    printf("Enter A Charecter  :  ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("This Charecter Is Upper Case Charecter \n");
    } else if (ch >= 'a'  && ch <= 'z') {
        printf("This Is A Lower Case Charecter ");
    } else {
        printf("This Is Not A Valid Charecter!");
    }
    return 0;
}

