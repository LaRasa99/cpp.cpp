//
// Created by DELL on 3/16/2023.
//
#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
using namespace std;
using namespace std::chrono;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for(i = 0; i < n-1; i++)
    {
        // Last i elements are already sorted
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    auto start = high_resolution_clock::now();

    // Initialize random number generator
    srand(time(0));

    // Get array size from user
    int size;
    cout << "Enter array size: ";
    cin >> size;

    // Allocate memory for the array
    int* arr = new int[size];

    // Fill array with random numbers between 1 and 100
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 200000 + 1;
    }

    bubbleSort(arr, size);
    /*int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);*/
    /*cout << "Sorted array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << */
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    double time = duration.count() / 1000000.0;
    cout << "time taken is: " << time << " seconds" << endl;
    return 0;
}