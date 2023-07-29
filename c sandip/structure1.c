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
    return 0;
}