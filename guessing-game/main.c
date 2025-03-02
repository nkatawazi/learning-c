#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;

    while(guess != secretNumber) 
    {
        if(guessCount < guessLimit) {
            printf("Guess the number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            break;
        }
        
    }

    if(secretNumber == guess) {
        printf("You got it right!");
    }
    else {
        printf("You got it wrong!");
    }

    
}