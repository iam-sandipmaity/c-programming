#include<stdio.h>

int main() {
    char str[16];
    printf("Enter Your Name  :  ");
    // scanf("%s", str);
    gets(str);   //it takes input from the user
    // printf("Your Name Is : %s ",str);
    puts(str);  // it work to print the string
    return 0;
}