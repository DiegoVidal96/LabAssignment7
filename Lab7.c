// Diego Jui
// Lab Assignment 6
// Due: 7 March 2024

#include <stdio.h>

int swaps = 0;

void bubbleSort(int arr1[], int n, int numSwaps[])
{
    int i, j, temp;
    //int swaps = 0;

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr1[j] > arr1[j+1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;

                numSwaps[arr1[j]]++;
                numSwaps[arr1[j+1]]++;
                swaps++;
            }
        }
    }
}

void selectionSort(int arr1[], int n, int numSwaps[])
{
    int i, j, min_idx, temp;

    for (int i = 0; i < n-1; i++)
    {
        min_idx = i;

        for (j = i+1; j < n; j++)
        {
            if (arr1[j] < arr1[min_idx])
            {
                min_idx = j;
            }
        }
    

        if (min_idx != i)
        {
            temp = arr1[i];
            arr1[i] = arr1[min_idx];
            arr1[min_idx] = temp;

            numSwaps[arr1[i]]++;
            numSwaps[arr1[min_idx]]++;

            swaps++;
        
        }
    }
}

int main()
{
    int arr1[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int arr2[9] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int arr3[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int arr4[9] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int numSwaps1[100] = {0};
    int numSwaps2[100] = {0};
    int numSwaps3[100] = {0};
    int numSwaps4[100] = {0};
    int arraySize = 9;

    printf("array1 bubble sort:\n");

    bubbleSort(arr1, arraySize, numSwaps1);

    for (int i = 0; i < arraySize; i++)
    {
        printf("%d: %d\n", arr1[i], numSwaps1[arr1[i]]);
    }

    printf("%d\n\n", swaps);

    swaps = 0;
    bubbleSort(arr2, arraySize, numSwaps2);

    for (int i = 0; i < arraySize; i++)
    {
        printf("%d: %d\n", arr2[i], numSwaps2[arr2[i]]);
    }

    
    printf("%d\n\n", swaps);
    

    printf("array1 selection sort:\n");

    swaps = 0;
    selectionSort(arr3, arraySize, numSwaps3);

    for (int i = 0; i < arraySize; i++)
    {
        printf("%d: %d\n", arr3[i], numSwaps3[arr3[i]]);
    }

    printf("%d\n\n", swaps);

    swaps = 0;
    selectionSort(arr4, arraySize, numSwaps4);

    for (int i = 0; i < arraySize; i++)
    {
        printf("%d: %d\n", arr4[i], numSwaps4[arr4[i]]);
    }

    printf("%d\n\n", swaps);

    return 0; 
}