// #include<stdio.h>

// int main() {
    
//     char ptr[] = "I AM SANDIP MAITY";
//     ptr = "Sandip";  // it shows errror
//     printf("%s",ptr);
//     return 0;
// }

#include<stdio.h>

int main() {
    char *ptr = "I AM SANDIP MAITY";     
 //  output will be "Sandip" 
    ptr = "Sandip";
    printf("%s",ptr);
    return 0;
}