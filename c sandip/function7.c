// Write function to calculate area of a square, a circle 7 a rectangle.

#include<stdio.h>
float AreaSquar(float side);
float AreaCircle(float redius);
float AreaRectangular(float a, float b);


int main() {
    float side, redius, a , b;
    printf("Enter The side Of The Squar :  ");
    scanf("%f",&side);
    printf("Enter The Redius Of The Circle  :  ");
    scanf("%f",&redius);
    printf("Enter The lenght of the Rectangular (a) :  ");
    scanf("%f",&a);
    printf("Enter The Width of the Rectangular (b) :  ");
    scanf("%f",&b);

    printf("Area Of The Squar Is : %f\n",AreaSquar(side) );
    printf("Area Of The Circle Is : %f\n",AreaCircle(redius) );
    printf("Area Of The Rectangular Is : %f\n",AreaRectangular(a, b) );
    

    return 0;
}

float AreaSquar(float side) {
    return side * side;
}
float AreaCircle(float redius) {
    return 3.14 * redius * redius;
}
float AreaRectangular(float a, float b) {
    return a * b;
}