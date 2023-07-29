// Print The Float Value 1.0 - 18.0 and charecter 'a' to 'z'

#include<stdio.h>
int main() {
    for(float i=1.0 ; i<= 18.0; i++) {
        printf("%f \n", i);
    }
    for(char ch='a'; ch<= 'z'; ch++) {
        printf("%c \n", ch);
    }
    return 0;
}