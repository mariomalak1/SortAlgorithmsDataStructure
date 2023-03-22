#include <iostream>
#include "Algorithms.h"
#include <conio.h>
#include <chrono>
#include <cstdlib>

using namespace std;

class MainClass {
private:
    void static chooseAlgorithmsDisplayMenu(){
        cout << "=============================================" << endl;
        cout << "       Select One Algorithm to Try." << endl;
        cout << "=============================================" << endl;
        cout << "1- Insertion sort" << endl;
        cout << "2-selection sort" << endl;
        cout << "3-bubble sort" << endl;
        cout << "4-shell sort" << endl;
        cout << "5-count sort" << endl;
        cout << "6-merge sort" << endl;
        cout << "7-quick sort" << endl;
        cout << "8 - Quit" << endl;
        cout << "Your Choice --> : ";
    }

    int static getAlgorithmNumber() {
        chooseAlgorithmsDisplayMenu();
        string choose;
        cin >> choose;
        if (choose == "1") {
            return 1;
        } else if (choose == "2") {
            return 2;
        } else if (choose == "3") {
            return 3;
        } else if (choose == "4") {
            return 4;
        } else if (choose == "5") {
            return 5;
        } else if (choose == "6") {
            return 6;
        } else if (choose == "7") {
            return 7;
        } else if (choose == "8"){
            return 8;
        }
        else {
            system("cls");
            cout << "=============================================" << endl;
            cerr << "##     Wrong Input.. Please Try Again.     ##" << endl;
            getAlgorithmNumber();
        }
        return 0;
    }

    void static getSizeDisplayMenu() {
        cout << "What is the size of the array you want to try:" << endl;
        cout << "1-200" << endl;
        cout << "2-500" << endl;
        cout << "3-1000" << endl;
        cout << "4-5000" << endl;
        cout << "5-10000" << endl;
        cout << "6-20000" << endl;
        cout << "7-50000" << endl;
        cout << "Your Choice --> : ";
    }

    int static getSize() {
        getSizeDisplayMenu();
        string choose;
        cin >> choose;
        if (choose == "1") {
            return 200;
        } else if (choose == "2") {
            return 500;
        } else if (choose == "3") {
            return 1000;
        } else if (choose == "4") {
            return 5000;
        } else if (choose == "5") {
            return 10000;
        } else if (choose == "6") {
            return 20000;
        } else if (choose == "7") {
            return 50000;
        } else {
            system("cls");
            cout << "=============================================" << endl;
            cerr << "##     Wrong Input.. Please Try Again.     ##" << endl;
            getSize();
        }
        return 0;
    }

    void static TestingAlgo(int choice){
        string algoName;
        int size;
        size = getSize();
        int *arr = new int[size];

        for (int i = 0; i < size; i++)
        {
            arr[i] = 1 + (rand() % 5000);
        }

        auto start = chrono::high_resolution_clock::now();
        switch (choice)
        {
            case 1:
            {
                algoName = "insertion Sort";
                sortLib::Algorithms::insertionSort(arr, size);
                break;
            }
            case 2:
            {
                algoName = "Selection Sort";
                sortLib::Algorithms::selectionSort(arr, size);
                break;
            }
            case 3:
            {
                algoName = "Bubble Sort";
                sortLib::Algorithms::bubbleSort(arr, size);
                break;
            }
            case 4:
            {
                algoName = "Shell Sort";
                sortLib::Algorithms::shellSort(arr, size);
                break;
            }
            case 5:
            {
                algoName = "Merge Sort";
                sortLib::Algorithms::mergeSort(arr, 0, size);
                break;
            }
            case 6:
            {
                algoName = "Quick Sort";
                sortLib::Algorithms::quickSort(arr, 0, size);
                break;
            }
            case 7:
            {
                algoName = "Count Sort";

                sortLib::Algorithms::countSort(arr, size);
                break;
            }
            default:
            {
                break;
            }
        }

        auto end = chrono::high_resolution_clock::now();
        double runTime = double(chrono::duration_cast<chrono::milliseconds>(end - start).count());
        system("cls");
        cout << "#############################################" << endl;
        cerr << " # " << algoName << " RunTime:" << runTime << " milliseconds" << endl;
        cout << "#############################################" << endl;
    }

public:
    void static displayMenu(){
        cout << "Welcome To Our Sorting Algorithms Package." << endl;

        while (true) {
            int choice = getAlgorithmNumber();
            if (choice > 0 && choice <= 8) {
                if (choice == 8){
                    break;
                }
                TestingAlgo(choice);
            }
        }
    }
};

int main(){
    MainClass::displayMenu();
}
