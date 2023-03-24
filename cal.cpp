#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << num1+ num2 <<endl;

    //madlib game
    //////////////////
    string color, pluralNoun, celebrity;

    cout << "Enter a color: ";
    getline(cin, color); //cannot seperate the lines
    cout << "Enter a pluralNoun: ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << "roses are "<<color << endl;
    cout << 
    pluralNoun<<" are blue" << endl;
    cout << "I love "<< celebrity<< endl;
    
    return 0;
}