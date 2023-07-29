
// Write A Program That One Is Child Or Teenenger Or Adult 

#include<stdio.h>
int main() {
    int age;
    printf("Enter Your Age :  ");
    scanf("%d", &age);

    if (age >=0 && age <13 ) {
        printf("You Are An Child \n");
        printf("You Are A Primary School Student \n");
    }
    else if (age >= 13 && age < 18) {
        printf("You Are An Teenenger \n");
        printf("You Are A High School Student \n");
    }
    else if (age >= 18 ) {
        printf("You Are An Adult \n");
        printf("You Are An Colloge Student \n");
    }
    else if(age<0) {
        printf("Age Can Not Be Negetive\n");
    }
    else {
        printf("Worng Age\n");
    }
    return 0;

}