//write A Program using a function which calculate the sum and average of two numbers. use pointers and print the vlues of sum and average in main()

#include<stdio.h>
void printSumAve(int a, int b, int *sum, float *avg);
int main() {
    int a,b,sum;
    float avg;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    printSumAve(a,b,&sum,&avg);
    printf("The Sum Of %d And %d Is : %d\n",a,b,sum);
    printf("The Ave Of %d And %d Is : %f\n",a,b,avg);
    return 0;
}

void printSumAve(int a, int b , int *sum, float *avg){
    *sum = a+ b;
    *avg =(float) (*sum) /2;
}