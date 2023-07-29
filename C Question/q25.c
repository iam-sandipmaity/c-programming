// Make Program that inputs user's name & prints its length.

//type 1
#include<stdio.h>
#include<string.h>

int main() {
    char name[] = "SANDIP";
    printf("Lenght Of Your name Is :  %d",strlen(name));
    return 0;
}

//type 2
// #include<stdio.h>


// int countNumber(char str[]);

// int main() {
//     char name[100];
//     printf("Enter Your Name : ");
//     fgets(name,100,stdin);
//     printf("Your Name Is : %s",name);
//     printf("Lenght Of Your Name Is :  %d\n",countNumber(name));
    

//     return 0;
// }

// int countNumber(char str[]) {
//     int count = 0;
//     for(int i=0; str[i] != '\0' ; i++) {
//         count++;
//     }
//     return count-1;
// }

