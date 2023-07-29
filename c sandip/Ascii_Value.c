//1. Write a C Program to Find ASCII Value of a Character.

#include<stdio.h>

int main() {
    char ch;
    printf("Enter A Character : ");
    scanf("%c",&ch);

    //%d will display the integer value of a character
    //%c will Display The Actual Character 
    printf("ASCII Value Of %c = %d \n", ch, ch);
    return 0;
}
