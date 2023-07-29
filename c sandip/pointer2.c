//Call  By Value

#include<stdio.h>
int sum(int x, int y);
int main() {
    int a, b;
    printf("Enter a : ");
    scanf("%d" ,&a);
    printf("Enter b : ");
    scanf("%d" ,&b);  // inputed a &b value by user copy in computer memory then this value goes to the sum function
    printf("The Value Of A & B Before Function Call Is %d & %d  \n",a,b);
    printf("The Sum Of %d & %d Is :%d  \n",a,b,sum(a,b));
    printf("The Value Of A & B after Function Call Is %d & %d  \n",a,b);
    return 0;
}

int sum(int x, int y){
    return x+y;
}


