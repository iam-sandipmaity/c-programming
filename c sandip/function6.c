// calculate the final price after GST

#include<stdio.h>
void calculatePrice(float value);

int main() {
    float value;
    printf("Enter the Price :  ");
    scanf("%f",&value);

    calculatePrice(value);
    

    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("Final price Is :  %f \n", value);
}