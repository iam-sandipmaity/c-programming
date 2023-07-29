// find the salted form of a password entered by user if the salt is "123" & added at the end.

#include<stdio.h>
#include<string.h>

void salting(char password[]) ;


int main() {
    char password[100];
    printf("Enter Your Password :  ");
    scanf("%s", password);
    salting(password);
    
    return 0;
}

void salting(char password[]) {
    char salt[] = "123";
    char newPassword[200];
    strcpy( newPassword ,password);    //newPass "test"
    strcat(newPassword,salt);        //newPass = "test" + "123"
    puts(newPassword);
}