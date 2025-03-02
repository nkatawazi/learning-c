#include <stdio.h>

void main()
{
    int age = 30;

    //pointer variable that is pointing to the memory address of age
    //the * is the thing that indicates its a pointer of the type defined. The naming schema doesn't matter (dont need p at start)
    int * pAge = &age;

    double gpa = 3.4;

    double * pGpa = &gpa;

    char grade = 'A';

    char * aGrade = &grade;
    

    //%p = pointer
    printf("age: %p\n gpa: %p\n grade: %p", pAge, pGpa, aGrade);
}