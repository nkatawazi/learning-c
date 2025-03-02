#include <stdio.h>

//compiler is forcing this to be defined before use
//https://stackoverflow.com/questions/28788968/why-do-we-need-to-declare-functions-before-using-them-in-c
void getName(char name[]) 
{
    printf("Hello %s\n", name);
}

void main()
{
    printf("test1\n");
    getName("Namat");
    printf("test3\n");
}

