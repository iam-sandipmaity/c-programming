

#include<stdio.h>

int main() {
    int a[]={100,200,300,400,500,600,700,800,900};
    int *ptr=&a[0];
    printf("The Value Of array before adition Of pointer : %d\n",*ptr);
    ptr+=3;                                                                  //addition of a number to pointer
    printf("The Value Of array after adition Of pointer :\t %d\n",*ptr);



    printf("The Value Of array before substraction Of pointer : %d\n",*ptr);
    ptr-=2;                                                                   //substraction of a number to pointer
    printf("The Value Of array after substraction Of pointer :\t %d\n",*ptr);

    //substraction of one pointer from another
    
    return 0;
}