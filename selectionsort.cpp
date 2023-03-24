//
// Created by DELL on 3/1/2023.
//
#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
using namespace std;
using namespace std::chrono;

void SelectionSort(int A[], int n)
{
    for(int i = 0; i< n-1;i++)
    {
        int iMin = i;
        for(int j = i+1; j<n; j++)
        {
            if(A[j]<A[iMin])
                iMin = j;
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
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
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 200000 + 1;
    }
    SelectionSort(arr,size);
    /*int A[] = {2, 7, 4, 2, 5, 3};
    SelectionSort(A,6);
    for(int i = 0; i<6;i++)
        cout << A[i] << " ";*/
    /*cout << "Sorted array: ";
        for(int i = 0; i < size; i++)
        {
        cout << arr[i] << " ";
    }
    cout << endl;*/
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    double time = duration.count() / 1000000.0;
    cout << "time taken is: " << time << " seconds" << endl;
    return 0;
}