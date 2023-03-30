#include <iostream>
#include <stack>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(vector<int>&  arr, int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high- 1; j++){
        if (arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSortIterative(vector<int>&  arr, int low, int high){
    stack<int> stack;
    stack.push(low);
    stack.push(high);
    while (!stack.empty()){
        high = stack.top();
        stack.pop();
        low = stack.top();
        stack.pop();
        int pivot = partition(arr, low, high);
        if (pivot - 1 > low){
            stack.push(low);
            stack.push(pivot - 1);
        }
        if (pivot + 1 < high){
            stack.push(pivot + 1);
            stack.push(high);
        }
    }
}

int main(){
    auto start = high_resolution_clock::now();
    srand(time(NULL));

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 200000 + 1; // generate random number between 500 to 20000
    }

    /*cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;*/

    /*int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;*/
    quickSortIterative(arr, 0, n-1);

    /*cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;*/

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    double time = duration.count() / 1000000.0;
    cout << "time taken is: " << time << " seconds" << endl;

    return 0;
}
