// Write a function named slice ,which takes a string & returns a sliced string from index n to m.

#include<stdio.h>
void slice (char str[],int n, int m);
int main() {
    char word[100] ;
    int n,m;
    printf("Enter A Word : ");
    fgets(word, 100, stdin);
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter m : ");
    scanf("%d",&m);

    slice(word,n,m);

    return 0;
}

void slice (char str[], int n, int m) {    // n and m are valid values
    char newStr[100] ;
    int j=0;
    for(int i=n; i<=m ; i++,j++) {
        newStr[j] = str[i];
    }
    newStr[j];
    puts(newStr);
}