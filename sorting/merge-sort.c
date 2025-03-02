#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

void mergeSort(int array[], int left, int right, int *cost);
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
    mergeSort(array, 0, arraySize - 1, &cost);
    clock_t end = clock();
    double timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nIteration Cost: %d", cost);
    printf("\nTime to execute: %f", timeSpent);

    // printf("\nArray in sorted order:\n");
    // printArray(array, arraySize);

    /*
    Iteration Cost: 1277062
    Time to execute: 0.007000
    */

    return 0;
}

int merge(int array[], int left, int middle, int right) {
    int cost = 0;
    int leftArraySize = middle - left + 1;
    int rightArraySize = right - middle;

    int leftArray[leftArraySize], rightArray[rightArraySize];

    //copied data to temporary arrays
    for (int i = 0; i < leftArraySize; i++) {
        leftArray[i] = array[left + i];
    }

    for (int i = 0; i < rightArraySize; i++) {
        rightArray[i] = array[middle + i + 1];
    }

    //merge temp arrays back into main array
    int leftArrayIndex = 0;
    int rightArrayIndex = 0;
    int arrayIndex = left;
    while(leftArrayIndex < leftArraySize && rightArrayIndex < rightArraySize) 
    {
        if(leftArray[leftArrayIndex] < rightArray[rightArrayIndex])
        {
            array[arrayIndex] = leftArray[leftArrayIndex];
            leftArrayIndex++;
        }
        else
        {
            array[arrayIndex] = rightArray[rightArrayIndex];
            rightArrayIndex++;
        }
        arrayIndex++;
        cost++;
    }

    return cost;

}

void mergeSort(int array[], int left, int right, int *cost) 
{
    if(left >= right) {
        //we're done
    }
    else
    {
        int middle = left + (right - left) / 2;

        //merge sort left
        mergeSort(array, left, middle, cost);
        //merge sort right
        mergeSort(array, middle + 1, right, cost);

        //split array down the middle
        int mergeCost = merge(array, left, middle, right);
        *cost += mergeCost;
    }
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
