#include<stdio.h>
int main() {
    for(int i=1 ; i<= 15 ; i++) {
        if (i==7) {
            break;  
        }
        printf("%d\n",i);
    }
    printf("Thank You\n");
    return 0;
}