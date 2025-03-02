#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int insertionSort(int array[], int arraySize);
void printArray(int array[], int arraySize);

int main()
{
    int maxArraySize = 100000;
    int array[maxArraySize];
    srand(0);
    for (int i = 0; i < maxArraySize; i++) {
        array[i] = rand();
    }

    int arraySize = sizeof(array) / sizeof(*array);

    // printf("Array in unsorted order:\n");
    // printArray(array, arraySize);

    clock_t begin = clock();
    int cost = insertionSort(array, arraySize);
    clock_t end = clock();
    double timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nIteration Cost: %d\n", cost);
    printf("\nTime to execute: %f", timeSpent);

    // printf("\nArray in sorted order:\n");
    // printArray(array, arraySize);

    /*
    Iteration Cost: 704724073
    Time to execute: 7.404000
    */

    return 0;
}

int insertionSort(int array[], int arraySize) 
{
    int cost = 0;

    //iterate through and see if anything needs swap
    for(int i = 0; i < arraySize; i++) 
    {
        if(i == 0) {
            //first element, move on
            cost++;
        }
        else
        {
            //if current element is less than the previous element
            if(array[i] < array[i - 1])
            {
                int elementToSwap = array[i];
                bool foundPosition = false;

                //find position it belongs by going backwards 
                for(int j = i - 1; j > 0; j--) 
                {
                    //if this element is greater than or equal to current position..
                    if(array[j] >= elementToSwap)
                    {
                        //save position
                        foundPosition = true;
                        array[j + 1] = array[j];
                        array[j] = elementToSwap;
                    }
                    else if(!foundPosition) {
                        //move element 1 step up
                        array[j + 1] = array[j];
                    }
                    cost++;
                }
            }
        }
    }

    return cost;
}

void printArray(int array[], int arraySize)
{
    for(int i = 0; i < arraySize; i++) 
    {
        if(i == (arraySize - 1)) {
            printf("%d", array[i]);
        }
        else
        {
            printf("%d, ", array[i]);
        }
    }
}