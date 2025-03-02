#include <stdio.h>

void main()
{
    // FILE *fpointer = fopen("employees.txt", "w");
    FILE *fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "\nJim, Salesman\nPam, Receptionist\nOscar, Accountant");

    fclose(fpointer);
}