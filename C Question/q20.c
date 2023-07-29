// Write A function To Calculatepercentage of a student from    marks in science, Math, & sanskrit.

#include<stdio.h>
float CalculateMark(float science, float math, float sanskrit);

int main() {
    float science, math, sanskrit;
    printf("Enter Your Science Mark  :  ");
    scanf("%f",&science);
    printf("Enter Your math Mark  :  ");
    scanf("%f",&math);
    printf("Enter Your Sanskrit Mark  :  ");
    scanf("%f",&sanskrit);

    printf("Your Average Percentage Mark Is : %f \n", CalculateMark(science,math,sanskrit));

    return 0;
  
}

float CalculateMark(float science, float math , float sanskrit) {
    return ((science + math + sanskrit)/3);
}