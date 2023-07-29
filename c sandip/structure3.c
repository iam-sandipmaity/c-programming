#include<stdio.h>
#include<string.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {

    struct student s1 = {"SANDIP MAITY",302,9.8};
    printf("Student Name : %s\n ",s1.name);

    struct student *ptr = &s1;
    printf("Student roll  With Ptr: %d\n", (*ptr).roll);
    printf("Student roll with Arrow Operator : %d\n", ptr->roll);

    // struct sudent ece[100];
    // ece[0].roll = 301;
    // ece[0].cgpa = 9.86;
    // strcpy(ece[0].name , "SANDIP MAITY");

    // printf("ECE[0] Name : %s \n", ece[0].name);
    // printf("ECE[0] Roll : %d \n", ece[0].roll);
    // printf("ECE[0] cgpa : %d \n", ece[0].cgpa);
    return 0;
}