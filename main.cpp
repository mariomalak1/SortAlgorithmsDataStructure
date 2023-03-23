#include <iostream>
#include "Algorithms.h"
#include <conio.h>
#include <chrono>
#include <cstdlib>
using namespace sortLib;
using namespace std;

int arrMenu()
{
    int choice;
    int size;
    system("cls");
start:
    cout << "What is the size of the array you want to try:" << endl;
    cout << "1-200" << endl;
    cout << "2-500" << endl;
    cout << "3-1000" << endl;
    cout << "4-5000" << endl;
    cout << "5-10000" << endl;
    cout << "6-20000" << endl;
    cout << "7-50000" << endl;
    cout << "Your Choice --> :" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        size = 200;
        break;
    }
    case 2:
    {
        size = 500;
        break;
    }
    case 3:
    {
        size = 1000;
        break;
    }
    case 4:
    {
        size = 5000;
        break;
    }
    case 5:
    {
        size = 10000;
        break;
    }
    case 6:
    {
        size = 20000;
        break;
    }
    case 7:
    {
        size = 50000;
        break;
    }
    default:
    {
        system("cls");
        cout << "##       Wrong INPUT        ##" << endl;
        goto start;
    }
    }
    return size;
}
void TestingAlgo(int choice)
{
    string algoName;
    int size;
    size = arrMenu();
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % 10000);
    }

    auto start = chrono::high_resolution_clock::now();
    switch (choice)
    {
    case 1:
    {
        algoName = "insertion Sort";
        insertionSort(arr, size);
        break;
    }
    case 2:
    {
        algoName = "Selection Sort";
        selectionSort(arr, size);
        break;
    }
    case 3:
    {
        algoName = "Bubble Sort";
        bubbleSort(arr, size);
        break;
    }
    case 4:
    {
        algoName = "Shell Sort";
        shellSort(arr, size);
        break;
    }
    case 5:
    {
        algoName = "Merge Sort";
        mergeSort(arr, 0, size);
        break;
    }
    case 6:
    {
        algoName = "Quick Sort";
        quickSort(arr, 0, size);
        break;
    }
    case 7:
    {
        algoName = "Count Sort";

        countSort(arr, size);
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
    cout << "\033[31m" << algoName << " RunTime:" << runTime << " milliseconds\033[0m " << endl;
    cout << "#############################################" << endl;
    // for (int i = 0; i < size; ++i)
    // {
    //     std::cout << arr[i] << ", ";
    // }
}
void displayMenu()
{

    int choice;

    cout << "Welcome To Our Sorting Algorithms Package." << endl;
start:
    cout << "=============================================" << endl;
    cout << "       Select One Algorithm to Try." << endl;
    cout << "=============================================" << endl;
    cout << "1-Insertion Sort." << endl;
    cout << "2-Selection Sort." << endl;
    cout << "3-Bubble Sort." << endl;
    cout << "4-Shell Sort." << endl;
    cout << "5-Merge Sort." << endl;
    cout << "6-Quick Sort." << endl;
    cout << "7-Count Sort." << endl;
    cout << "8-Exit" << endl;
    cout << "Which one you want to try--->:" << endl;
    cin >> choice;

    if (choice > 0 && choice <= 8)
    {

        switch (choice)
        {
        case 1:
        {
            TestingAlgo(1);
            break;
        }
        case 2:
        {
            TestingAlgo(2);
            break;
        }
        case 3:
        {
            TestingAlgo(3);
            break;
        }
        case 4:
        {
            TestingAlgo(4);
            break;
        }
        case 5:
        {
            TestingAlgo(5);
            break;
        }
        case 6:
        {
            TestingAlgo(6);
            break;
        }
        case 7:
        {
            TestingAlgo(7);
            break;
        }
        case 8:
        {
            exit(0);
        }
        case 0:
        {
            goto start;
            break;
        }

        default:
        {
            break;
        }
        }
    }
    else
    {
        system("cls");
        cout << "=============================================" << endl;
        cout << "##     Wrong Input.. Please Try Again.     ##" << endl;
    }
    goto start;
}
int main()
{
    displayMenu();
}
