//
// Created by DELL on 3/3/2023.
//
#include <iostream>
#include <cmath>
using namespace std;

void Heapify(int A, int k)
{
    int n= sizeof(A);
    int left = 2*k;
    int right = 2*k+1;
    if((left <=n) and (A[left]> A[k]))
        int max = left;
    else
        int max = k;
    if(left<=n && A[right]>A[left])
        int max = right;
    if(int max=k){
        swap(A[k],A[max]);
        Heapify(A, max);
    }

}

void BuildMaxHeap(int A)
{
    int n = sizeof(A);
    for(int j= floorl(n/2); j<1;j--)
    {
        Heapify(A,j);
    }
}

void HeapSort(int A)
{
    int n = sizeof(A);
    BuildMaxHeap(A);
    for(int i; i<n; i++)
    {
        swap(A[1],A[i]);
        n-=1;
        Heapify(A,1);
    }
}

int main(){
    int A[]={2, 4, 6, 77, 8, 4};
    HeapSort(A);
    for(int a=0; a<6; a++)
        cout << A[a]<<endl;
}