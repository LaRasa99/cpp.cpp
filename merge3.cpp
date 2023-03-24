#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

void merge(int *array,int l, int m, int r){
    int i, j, k, nl, nr;
    //size of left and right sub-arrays
    nl = m-l+1; nr = r-m;
    int left[nl], right[nr];
    //fill left and right sub-arrays
    for(i = 0; i<nl; i++)
        left[i] = array[l+i];
    for(j = 0; j<nr; j++)
        right[j] = array[m+1+j];
    i = 0; j = 0; k = l;
    //marge temp arrays to real array
    while(i < nl && j<nr) {
        if(left[i] <= right[j]) {
            array[k] = left[i];
            i++;
        }else{
            array[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<nl) {       //extra element in left array
        array[k] = left[i];
        i++; k++;
    }
    while(j<nr) {     //extra element in right array
        array[k] = right[j];
        j++; k++;
    }

}

void mergeSort(int *array, int begin, int end){
    if (begin >= end)
        return; // Returns recursively

    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

/*void printArray(int *array,int size){
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}*/
int main(){
    int n;
    cout<<"total elements in array: ";
    cin>>n;
    int arr[n] ;
    auto start = high_resolution_clock::now();
    for(int i=0;i<n;i++)
        arr[i]=rand()%20;
    int N = sizeof(arr) / sizeof(arr[0]);
    //printArray(arr,N);
    mergeSort(arr,0,N-1);
    //printArray(arr,N);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "time taken is "
         << duration.count() / 1000000.0 << " seconds" << endl;
    return 0;
}