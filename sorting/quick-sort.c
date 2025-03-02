#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

void swap(int* a, int* b);
int partition(int array[], int low, int high, int *cost);
void quickSort(int array[], int low, int high, int *cost);
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

    int cost = 0;

    clock_t begin = clock();
    quickSort(array, 0, arraySize - 1, &cost);
    clock_t end = clock();
    double timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nIteration Cost: %d\n", cost);
    printf("\nTime to execute: %f", timeSpent);

    // printf("\nArray in sorted order:\n");
    // printArray(array, arraySize);

    /*
    Iteration Cost: 2099411
    Time to execute: 0.009000
    */

    return 0;
}

void quickSort(int array[], int low, int high, int *cost) 
{
    // printf("\ncost so far: %d\n", cost);
    // *cost += 1;
    if(low < high)
    {
        int partitionIndex = partition(array, low, high, cost);

        quickSort(array, low, partitionIndex - 1, cost);
        quickSort(array, partitionIndex + 1, high, cost);
    }
}

void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int high, int *cost)
{
    int pivot = array[low];

    int i = low;
    int j = high;

    while(i < j) 
    {
        //seeking first element greater than the pivot from beginning of array to end
        while(array[i] <= pivot && i <= high - 1)
        {
            i++;
            *cost += 1;
        }

        //seeking first element smaller than the pivot from end of array to beginning
        while(array[j] > pivot && j >= low + 1)
        {
            j--;
            *cost += 1;
        }

        //at this point it found an area where a swap needs to occur
        //as long as the "low" is less than the "high"...

        if (i < j)
        {
            swap(&array[i], &array[j]);
        }
    }

    // printf("%d\n", cost);

    swap(&array[low], &array[j]);
    return j;
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


