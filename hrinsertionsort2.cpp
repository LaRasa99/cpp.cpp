//
// Created by DELL on 3/17/2023.
//
#include <iostream>
using namespace std;

void InsertionSort2(int A[],int n)
{
    for(int i=1; i<n;i++)
    {
        int value = A[i];
        int hole = i;
        while(hole>0 && A[hole-1]>value)
        {
            A[hole] = A[hole-1];
            hole = hole-1;

        }
        A[hole] = value;
        for(int i = 0; i<n;i++)
                cout << A[i] << " " ;
        cout << endl;
    }
    /*for(int i = 0; i<n;i++)
        cout << A[i] << " " ;
    cout << endl;*/
}

int main(){
    int n=6;
    int A[] = {1, 4, 3, 5,6,2};
    InsertionSort2(A,n);

}