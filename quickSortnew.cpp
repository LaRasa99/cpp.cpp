#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b = temp;
}
int partition (vector<int>& A, int p, int r)
{
    int x = A[r];
    int i = p - 1;
    for (int j = p; j <= r- 1; j++)
    {
        if (A[j] <= x)
        {
            i++;
            swap (&A[i], &A[j]);
        }
    }
    swap (&A[i + 1], &A[r]);
    return (i + 1);
}
void quickSort(vector<int>& arr, int p, int r)
{
    if (p < r)
    {
        int q = partition(arr, p,r);
        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, r);
    }
}
int main() {
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

    /*int a[] = {2, 6, 5, 1, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;*/
    quickSort(arr, 0, n - 1);

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
