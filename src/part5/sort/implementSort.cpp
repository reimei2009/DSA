//
// Created by ADMIN on 11/18/2024.
//

#include "implementSort.h"
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void selectionSort(int arr[], int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        int minIndex = i;
        for (int j = i + 1 ; j < n ; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(&arr[minIndex], &arr[i]);
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n - i ; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(&arr[j + 1], &arr[j]);
            }
        }
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1 ; i < n ; i++)
    {
        int x = arr[i];
        int pos = i - 1;
        while (pos >= 0 && arr[pos] > x)
        {
            arr[pos + 1] = arr[pos];
            --pos;
        }
        arr[pos + 1] = x;
    }
}

int main()
{
    return 0;
}
