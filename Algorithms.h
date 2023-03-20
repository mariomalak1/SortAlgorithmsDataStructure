/*
 * this algorithms class that have
 * */

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
    }

    void selectionSort() {

    }

    void bubbleSort() {

    }

    void shellSort() {

    }

    void mergeSort() {

    }

    void quickSort() {

    }

    void countSort() {

    }

}

#endif //SORTING_ALOGORITMS_PACKAGE_ALGORITHMS_H
