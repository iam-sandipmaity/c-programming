// print hello world for n time using whileloop
#include<stdio.h>
int main() {
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    int i=1;
    while(i<=n) {
        printf("Hello World \n");
        i++;
    }
    return 0;
    
}

