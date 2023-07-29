#include<stdio.h>
#include<string.h>
struct student {
    char name[100];
    int roll;
    float cgpa;

};
void printinfo(struct student s1);

int main() {
    struct student s1= {"Sandip Maity",302,10.02};
    
    struct student s2 ={"Rupam Maity", 303,6.23};

    struct student s3 = {"Mahadeb Jana",304,9.23};
    
    printinfo(s1);
    printinfo(s2);
    printinfo(s3);
}

void printinfo(struct student s1) {
    printf("Student Information \n");
    printf("Student Name Is :  %s \n",s1.name);
    printf("Student Roll Is  :  %d \n ",s1.roll);
    printf("Student CGPA Is  :   %.2f \n",s1.cgpa);
    
}