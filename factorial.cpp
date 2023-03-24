//
// Created by DELL on 3/23/2023.
//
#include <iostream>
using namespace std;



/*int main(){
    int n;
    cin >> n;
    int p = factorial(n);
    cout << p;
}

int factorial(int n){
    if (n==0)
        return 1;
    else
        return n*factorial(n-1);
}*/
#include<iostream>
using namespace std;

int factorial(int n);

int main() {

    unsigned long n;
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}

unsigned long factorial(unsigned long n) {

    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
