#include <stdio.h>

void main()
{
    char grade = 'L';

    switch(grade) 
    {
        case 'A':
            printf("Well done!");
            break;
        case 'B':
            printf("You did okay!");
            break;
        case 'C':
            printf("You did terrible!");
            break;
        case 'D':
            printf("You should feel bad!");
            break;
        case 'F':
            printf("Go learn more!");
            break;
        default:
            printf("Invalid grade");
            break;
    }
}
