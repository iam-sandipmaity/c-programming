#include<stdio.h>
#include<string.h>

int main() {
    char firtStr[100] = "Hello ";
    char secStr[] = "World";
    strcat(firtStr,secStr);
    puts(firtStr);
    return 0;
}