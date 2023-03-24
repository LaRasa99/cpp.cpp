#include <iostream>
using namespace std;

// also known as instance functions

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;

        }
         
        // here these functions calls on specific objects
        bool hasHonors(){ 
            if (gpa >=3.5){
                return true;
            };
            return false;
        }
};



int main(){
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Arts", 3.5);

    cout << student2.hasHonors();
    return 0;
}