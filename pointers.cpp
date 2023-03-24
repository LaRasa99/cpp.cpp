#include <iostream>
using namespace std;

int main()
{
    // pointer is a memory address
    int age = 21;
    int *ptr1 = &age; //making a pointer variable
    double gpa = 3.54;
    double *ptr2 = &gpa;
    string name = "Rasa";
    string *pName = &name;

    //cout << "Age: " << &age << endl;
    //cout << "GPA: " << &gpa << endl;
    //cout << "Name: " << &name << endl;

    //cout << pAge;

    cout << ptr1 << endl; //dereferencing
    cout << *&gpa; //dereferencing
    return 0;
}