#include <stdio.h>

void main()
{
    // double gpa;
    // printf("Enter in your gpa: "); 
    // scanf("%lf", &gpa); //have to use %lf for scanning floats?
    // printf("\n Your GPA is %f", gpa);

    // char grade;
    // printf("Enter in your grade: "); 
    // scanf("%c", &grade);
    // printf("\n Your grade is %c", grade);

    // char name[200];
    // printf("Enter your name: "); 
    // scanf("%s", name); //dont need ampersand because strings are stored in stack instead of heap?
    // printf("\n Your name is %s", name);

    //scanf only gets characters up to first space
    //fgets gets the whole line

    char name[200];
    printf("Enter your name: "); 
    fgets(name, 200, stdin); //it will save the "enter" command so it will create a carriage return when outputting it
    printf("\n Your name is %s", name);
}