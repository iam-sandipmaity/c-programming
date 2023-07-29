// Write A Program To Store The Data Of 3 Students.

#include<stdio.h>
#include<string.h>
struct student {
    char name[100];
    int roll;
    float cgpa;

};
        
int main() {
    struct student s1;
    s1.roll = 302;
    s1.cgpa = 10.02;
    strcpy(s1.name,"Sandip Maity");

    printf("Student Name Is :  %s \n",s1.name);
    printf("Student Roll Is  :  %d \n ",s1.roll);
    printf("Student CGPA Is  :   %.2f \n",s1.cgpa);

    struct student s2;
    s2.roll = 302;
    s2.cgpa = 10.02;
    strcpy(s2.name,"MANIk");

    printf("Student Name Is :  %s \n",s2.name);
    printf("Student Roll Is  :  %d \n ",s2.roll);
    printf("Student CGPA Is  :   %.2f \n",s2.cgpa);

    struct student s3;
    s3.roll = 302;
    s3.cgpa = 10.02;
    strcpy(s3.name,"MANAS");

    printf("Student Name Is :  %s \n",s3.name);
    printf("Student Roll Is  :  %d \n ",s3.roll);
    printf("Student CGPA Is  :   %.2f \n",s3.cgpa);
    return 0;
}

// #include<stdio.h>
// #include<string.h>
// struct student {
//     int roll;
//     char name;
//     float cgpa;
// };


// int main() {
//     struct student s1;
//     s1.roll = 301;
//     s1.cgpa = 8.36;
//     strcpy(s1.name,"Debjit ");

//     printf(" 1st Student Name Is : %s \n",s1.name);
//     printf("1st Student roll Is :  %d \n",s1.roll);
//     printf("1st student CGPA Is :  %f \n",s1.cgpa);


//     struct student s2;
//     s2.roll = 302;
//     s2.cgpa = 6.2;
//     strcpy(s2.name,"Sandip maity");

//     printf("2nd Student name : %s \n", s2.name);
//     printf("2nd Student Roll Is : %d \n", s2.roll);
//     printf("2nd Student CGPA Is : %f \n",s2.cgpa);


//     struct student s3;
//     s3.roll = 303;
//     s3.cgpa = 6.53;
//     strcpy(s3.name,"Tathagata");

    
//     printf("2nd Student name : %s \n", s3.name);
//     printf("2nd Student Roll Is : %d \n", s3.roll);
//     printf("2nd Student CGPA Is : %f \n",s3.cgpa);
    
//     return 0;
// }