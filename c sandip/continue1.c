// print 1-10 Without 7

#include<stdio.h>
int main() {
    for(int i=1 ; i<=10 ; i++) {
        if(i==7) {
            continue; // continue will skip one number and it go ahead
        }
        printf("%d \n", i);
    }
    return 0;
}