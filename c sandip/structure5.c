#include<stdio.h>
#include<stdio.h>

//user defined
// typedef struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// }stu;
// int main() {
//     stu s1 ={301,2.5,"Sandip Maity"};    // struct student s1; -> this whole form is represented by stu s1;
//     return 0;
// }

typedef struct ElectronicsandComunicationEngineering {
    int roll;
    float cgpa;
    char name[100];
}ece;
#include<stdio.h>

int main() {
    ece s1 = {301,4.6,"Sandip"};
    printf("Student Name :%s", s1.name);
    return 0;
}