#include <iostream>
using namespace std;

namespace sortLib
{
    class Algorithms{

    private:
        template<class T>
        void static merge(T arr[], int l, int m, int r) {
            // m = l + ( r - l ) / 2

            int i, j, k = 0;
            int n1 = m - l + 1;
            int n2 = r - m;
            int *L = new int[n1];
            int *R = new int[n2];

            // fill the new left array
            for (i = 0; i < n1; ++i) {
                L[i] = arr[l + i];
            }

            // fill the new right array
            for (j = 0; j < n2; ++j) {
                R[j] = arr[j + m + l];
            }

            i = j = 0;
            k = l;

            while (i < n1 && j < n2) {
                // get smaller first
                if (L[i] >= R[j]) {
                    arr[k] = R[j];
                    j++;
                } else {
                    arr[k] = L[i];
                    i++;
                }
                k++;
            }

            // put the remaining part in the arr1 in the arr3
            while (i < n1) {
                arr[k] = L[i];
                i++;
                k++;
            }

            while (j < n2) {
                arr[k] = R[j];
                j++;
                k++;
            }
        }


    public:
        template<class T>
        void static printArr(T arr[], int n) {
            for (int i = 0; i < n - 1; ++i) {
                std::cout << arr[i] << ", ";
            }
            std::cout << arr[n - 1] << std::endl;
        }

        template<class T>
        void static insertionSort(T data[], int n) {
            for (int i = 1; i < n; i++) {
                for (int j = 0; j < i; ++j) {
                    if (data[j] > data[i]) {
                        T temp = data[i];
                        data[i] = data[j];
                        data[j] = temp;
                    }
                }
            }
        }

        template<class T>
        void static selectionSort(T arr[], int size) {
            int min;
            for (int i = 0; i < size - 1; i++) {
                min = i;
                for (int j = i + 1; j < size; j++) {
                    if (arr[j] < arr[min]) {
                        min = j;
                    }
                }
                swap(arr[min], arr[i]);
            }
        }

        void static shellSort(int arr[], int n) {
            for (int gap = n / 2; gap > 0; gap /= 2) {
                // divide data into sub arrays
                for (int i = gap; i < n; i++) {
                    int tmp = arr[i];

                    int j = i;

                    // sort sub array
                    for (; j >= gap && arr[j - gap] > tmp; j -= gap) {
                        arr[j] = arr[j - gap];
                    }

                    arr[j] = tmp;
                }
            }
        }


        template<class T>
        void static mergeSort(T arr[], int left, int right) {
            if (left < right) {
                int m = left + (right - left) / 2;
                mergeSort(arr, left, m);
                mergeSort(arr, m + 1, right);
                merge(arr, left, m, right);
            }
        }

        template<class T>
        void static quickSort(T arr[], int left, int right) {
            int i = left, j = right;
            T tmp;
            T pivot = arr[(left + right) / 2];

            // Partition the array
            while (i <= j) {
                while (arr[i] < pivot) {
                    i++;
                }
                while (arr[j] > pivot) {
                    j--;
                }
                if (i <= j) {
                    tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                    i++;
                    j--;
                }
            };

            // Recursion
            if (left < j) {
                quickSort(arr, left, j);
            }
            if (i < right) {
                quickSort(arr, i, right);
            }
        }


        template<class T>
        void static countSort(T arr[], int size) {
            T *output_arr = new T[size + 1];
            int maxEl = arr[0];
            for (int i = 1; i < size; i++) // getting max element in the array
            {
                if (arr[i] > maxEl) {
                    maxEl = arr[i];
                }
            }
            long long int *count = new long long int[maxEl + 1];
            // initializing count array to = 0
            for (int i = 0; i <= maxEl; i++) {
                count[i] = 0;
            }
            for (int i = 0; i < size; i++) {
                count[arr[i]]++;
            }
            for (int i = 1; i <= maxEl; i++) {
                count[i] += count[i - 1];
            }
            for (int i = 0; i < size; i++) {
                output_arr[count[arr[i]] - 1] = arr[i];
                count[arr[i]]--;
            }
            for (int i = 0; i < size; i++) {
                arr[i] = output_arr[i];
            }
            delete[] count;
            delete[] output_arr;
        }
    };
}
