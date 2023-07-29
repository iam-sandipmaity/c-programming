// Make A Program By Using Function Concept to sum, different, multiply, divition of 2 numbergcc g


#include<stdio.h>
int sum(int a, int b);
int diff(int a, int b);
int multiply(int a, int b);
int div(int a , int b);
int main() {
    int a,b;
    printf("Enter The first Number :  ");
    scanf("%d", &a);
    printf("Enter The second Number :  ");
    scanf("%d", &b);

    int s = sum (a, b);
    int d = diff(a, b);
    int m = multiply(a, b);
    int D = div(a, b);
    printf("The Sum Is  :  %d  \n",s);
    printf("Different Between 2 Number Is : %d \n",d);
    printf("Product Between 2 Number Is : %d \n",m);
    printf("Divition Between 2 Number Is : %d \n",D);

    return 0;
}

int sum (int x, int y) {
    return x + y;
}
int diff(int x, int y) {
    return x - y;
}
int multiply(int x, int y) {
    return x * y;
}
int div(int x, int y) {
    return x / y;
}
