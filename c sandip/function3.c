// Write A function That Prints Namaste if user is Indian & Bonjour if the user is French

#include<stdio.h>
void namaste();
void bonjour();


int main() {
    printf("Enter i For Indian & f For French :  ");
    char ch;
    scanf("%c", &ch);
    if(ch == 'i') {
        namaste();
    } else if (ch == 'f') {
        bonjour();
    } else {
        printf("You Are Not An Indian Or French \n");
    }

    return 0;
}

void namaste() {
    printf("Namaste \n");
}
void bonjour() {
    printf("Bonjour \n");
}

