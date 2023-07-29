// for infinite loop 

#include<stdio.h>
int main() {
    for(int i= 1; ;i++) { //here condition does not mention so it count infinite term whenever the memory will fill it will continue
        printf("%d\n", i);
    }
    return 0;
}
