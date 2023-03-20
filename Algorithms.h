
<<<<<<< HEAD
#include <iostream>
using namespace std;

namespace sortlib
{
    template <class T>
    void InsertionSort(T arr[], int size)
    {
=======
#ifndef SORTING_ALOGORITMS_PACKAGE_ALGORITHMS_H
#define SORTING_ALOGORITMS_PACKAGE_ALGORITHMS_H

namespace sortLib {

    template <class T>
    void printArr(T arr[], int n){
        for (int i = 0; i < n - 1; ++i) {
            std::cout << arr[i] << ", ";
        }
        std::cout << arr[n-1] << std::endl;
    }

    template <class T>
    void insertionSort(T data[], int n){
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; ++j) {
                if(data[j] > data[i]){
                    T temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                }
            }
        }
>>>>>>> 24872d0647832d042f95e500771e61209c36a020
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
