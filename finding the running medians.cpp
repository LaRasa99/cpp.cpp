//
// Created by DELL on 3/30/2023.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quicksort(vector<int>& arr, int low, int high, int k) {
    if (k > 0 && k <= high - low + 1) {
        int pivot = partition(arr, low, high);
        if (pivot - low == k - 1) {
            return arr[pivot];
        }
        if (pivot - low > k - 1) {
            return quicksort(arr, low, pivot - 1, k);
        }
        return quicksort(arr, pivot + 1, high, k - pivot + low - 1);
    }
    return -1;
}

void printMedian(vector<int>& arr, int n) {
    int median;
    if (n % 2 == 0) {
        int m1 = quicksort(arr, 0, n - 1, n / 2);
        int m2 = quicksort(arr, 0, n - 1, n / 2 + 1);
        median = (m1 + m2) / 2;
    }
    else {
        median = quicksort(arr, 0, n - 1, n / 2 + 1);
    }
    cout << median << endl;
}

int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    vector<int> arr;
    int x;
    while (ss >> x) {
        arr.push_back(x);
        printMedian(arr, arr.size());
    }
    return 0;
}