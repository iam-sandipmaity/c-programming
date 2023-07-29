// Check If A Given Charecter Is Present in a string or not.

#include<stdio.h>
void checkCharecter(char str[] ,char ch);

int main() {
    // char str[100], ch;
    // printf("Enter A Sentence :  ");
    // fgets(str, 100, stdin);
    // printf("Enter A Charecter :  ");
    // scanf("%c",ch);
    char str[] = "Sandip Maity";
    char ch = 'a';
    checkCharecter(str,ch);

    
    return 0;
}

void checkCharecter(char str[], char ch) {
    for(int i =0; str[i] != '\0' ; i++) {
        if(str[i] == ch) {
            printf("charecter Is present \n");
            return;
        }
        
            
        
    }
    printf("charecter Is not present \n");

}