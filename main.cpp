#include <iostream>
#include "Algorithms.h"

int main() {
    int arr[] = {2,5,8,7,4};
    int n = 5;

    sortLib::printArr(arr, n);

    sortLib::insertionSort(arr, n);

    sortLib::printArr(arr, n);
    return 0;
}
