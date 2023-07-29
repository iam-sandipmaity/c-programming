// Write A function To convert celcius to fahrenheit.
// f  =  c *(9.0 / 5.0) +32

#include<stdio.h>
float convertTemp(float cel);

int main() {                    // far -> hahrenheit & cel -> celcius
    float cel;
    printf("Enter The Temperature In celcius :  ");
    scanf("%f",&cel);
    float far = convertTemp(cel);
    printf("your Tempareture in Fahrenheit Is : %f \n", far);
    return 0;
}

float convertTemp(float cel) {
    float far = cel * (9.0 / 5.0) +32;
    return far;
}