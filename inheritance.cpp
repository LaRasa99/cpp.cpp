#include <iostream>
using namespace std;

class Chef {
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialdish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "Makes Pasta" << endl;
    }
        void makeSpecialdish(){
            cout << "The chef makes chicken parm" << endl; //overriding
        }
};


int main()
{
    
    Chef chef;
    chef.makeSpecialdish();

    ItalianChef italianChef;
    italianChef.makeSpecialdish(); //overriding
    return 0;
}

/*
here Chef --> super class
     ItalianChef --> sub class
*/