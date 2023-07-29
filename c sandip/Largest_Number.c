// 3. Write a C Program to Find the Largest Number Among Three Numbers.
#include <stdio.h>
int main()
{
    double n1, n2, n3;
    printf("Enter The Value Of n1 , n2 & n3 : ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
    {
        printf("%.2f is the largest number.", n1);
    }
    else if (n2 >= n3)
    {
        printf("%.2f is the largest number.", n2);
    }
    else
    {
        printf("%.2f is the largest number.", n3);
    }

    return 0;
}