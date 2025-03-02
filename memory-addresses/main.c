#include <stdio.h>

void main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    //%p = pointer
    printf("age: %p\n gpa: %p\n grade: %p", &age, &gpa, &grade);
}