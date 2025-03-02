#include <stdio.h>

void main()
{
    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter a color:");
    scanf("%s", color, stdin);

    printf("Enter a plural noun:");
    scanf("%s", pluralNoun, stdin);

    printf("Enter a celebrity:");
    scanf("%s", celebrity, stdin);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", celebrity);
}