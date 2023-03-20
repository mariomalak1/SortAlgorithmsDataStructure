#include <iostream>
using namespace std;


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
