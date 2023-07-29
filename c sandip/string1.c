#include<stdio.h>

int main() {
    // char str[] = "SANDIP";
    char str[] = {'S','A','N','D','I','P','\0'};
    char *ptr;
    ptr=str;
    while(*ptr != '\0') {
    
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}