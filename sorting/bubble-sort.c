#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int bubbleSort(int array[], int arraySize);
void printArray(int array[], int arraySize);

void main()
{
    
    int maxArraySize = 100000;
    int array[maxArraySize];
    srand(0);
    for (int i = 0; i < maxArraySize; i++) {
        array[i] = rand();
    }
    // int array[10] = {1, 6, 4, 9, 10, 3, 12, 8, 6, 1};

    // printf("%d\n", *array);
    // printf("%d\n", array[0]);
    //the above both outputs the first element in the array

    //sizeof on unsorted array returns 40 because it has 10 elements that are 4 bytes each (total memory allocation)
    //sizeof the first element in the array is the size of the first integer (4 bytes)
    //dividing the two gets you the length of the array
    int arraySize = sizeof(array) / sizeof(*array);
    // printf("%d\n", arraySize);

    // printf("Array in unsorted order:\n");
    // printArray(array, arraySize);

    clock_t begin = clock();
    int cost = bubbleSort(array, arraySize);
    clock_t end = clock();
    double timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nIteration Cost: %d\n", cost);
    printf("\nTime to execute: %f", timeSpent);

    /*
    Iteration Cost: 704982704
    Time to execute: 13.087000
    */
    
    // printf("\nArray in sorted order:\n");
    // printArray(array, arraySize);
}

int bubbleSort(int array[], int arraySize) 
{
    int cost = 0;

    //iterate through and see if anything needs swap
    for(int i = 0; i < arraySize; i++) 
    {
        for(int j = (i + 1); j < arraySize; j++) 
        {
            cost++;
            if(array[i] > array[j]) 
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
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