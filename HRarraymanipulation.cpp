//
// Created by DELL on 3/17/2023.
//
#include <iostream>
using namespace std;

int main(){
    int n=5;
    int m=3;
    int arr[3][3]= {{1, 2, 100},{2, 5, 100},{3, 4, 100}};
    int l[5+1] = {0};
    /*for(int i = 0; i<n;i++)
        cout << l[i] << " " ;
    cout << endl;*/
    for(int a=0, b=0, k =0; a<m, b<m, k<m;a++,b++,k++){
            int x=arr[a];

            l[arr[a]]+=arr[k];
            if((arr[b]+1)<n){
                l[arr[b+1]]-=arr[k];
            }
    int max, sum=0;
    for(int j=0; j<6; j++)
        sum+=j;
        if(sum>max)
            max=sum;
    cout << max<< endl;
    }
}