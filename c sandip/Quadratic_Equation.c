//4. Write a C Program to Find the Roots of a Quadratic Equation.
#include<stdio.h>
#include<math.h>

int main() {
    double a,b,c,discriminant,root1,root2,real_part,img_part;
    printf("Enter a , b , c : ");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("root1 = %.2lf & root2 = %.2lf \n",root1, root2);
    } // condition for real and equal roots
    else if(discriminant == 0) {
        root1 = root2 = (-b/(2*a));
        printf("root1 = root2 = %.2lf;", root1);
    } // if roots are not real
    else {
        real_part = ((-b)/(2*a));
        img_part = ((-discriminant)/(2*a));
        printf("root1 = %.2lf + %.2lfi & root2 = %.2lf - %.2lfi\n",real_part,img_part,real_part,img_part);
    }
    return 0;
}