#pragma once
#include <iostream>
using namespace std;

namespace sortlib
{
    template <class T>
    void InsertionSort(T arr[], int size)
    {
    }
    template <class T>
    void selectionSort(T arr[], int size)
    {
        int min;
        for (int i = 0; i < size - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            swap(arr[min], arr[i]);
        }
    }
    template <class T>
    void bubbleSort(T arr[], int size)
    {
    }
    template <class T>
    void shellSort(T arr[], int size)
    {
    }
    template <class T>
    void mergeSort(T arr[], int size)
    {
    }
    template <class T>
    void quickSort(T arr[], int size)
    {
    }
    template <class T>
    void countSort(T arr[], int size)
    {
    }
}
