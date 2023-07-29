// Print The Sum Of First n Natural Numbers. Also print Them in reverse.

#include<stdio.h>
int main() {
    int n;
    printf("Enter Number :  ");
    scanf("%d", &n);
    
    
    // int sum = 0;
    // for(int i=1; i<=n; i++) {
    //     sum =sum+i;
    // }
    // printf("sum is  : %d \n", sum);

    // for(int i= n ; i>=1 ; i--) {
    //     printf("%d \n", i);
    // } 
/*


*/
    // int sum= 0;
    // for(int i=1,j=n; i<=n && j>=1; i++, j-- ) {
    //     sum=sum+i;
    
   
    // printf("%d \n", j);
    // }
    //  printf("The Sum Is : %d \n", sum);


    int sum=0;
    for(int i=n; i>=1; i--) {
        sum = sum + i;
        printf("%d \n", i );
       
    }
     printf("The sum Is : %d \n", sum );
    return 0;

}