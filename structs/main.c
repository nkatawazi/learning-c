#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

void main()
{
    struct Student student1;
    student1.age = 35;
    student1.gpa = 3.6;
    strcpy(student1.name, "Namat");
    strcpy(student1.major, "Computer Science");

    printf("%f\n", student1.gpa);
    printf("%s", student1.name);
}