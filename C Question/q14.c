//print all the odd numbers from 5 to 50

#include<stdio.h>
int main() {
//TYPE --1

    // for(int i=5; i<=50; i+=2) {
    //     printf("%d \n", i);
    // }

//TYPE--2

    // for(int i=5; i<=50; i++) {
    //     if(i % 2 !=0 ) {
    //         printf("%d \n", i); //odd
    //     }
    // }
//TYPE --3
    for(int i=5; i<=50 ; i++) {
        if(i % 2 == 0) {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}