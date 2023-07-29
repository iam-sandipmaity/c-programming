// Creat a string firstname & lastname to store details of user & print all the charecters using a loop.

#include<stdio.h>
void printName(char arr[]);

int main() {
    char FirstName[] = "SANDIP";
    char LastName[] = "MAITY";

    printName(FirstName);
    printName(LastName);
    return 0;
}

void printName(char arr[]) {
    for(int i=0 ;arr[i] != '\0' ; i++) {
        printf("%c",arr[i]);
    }
    printf("\n");
}   