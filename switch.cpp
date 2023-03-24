#include <iostream>
using namespace std;

string getDayOfWeek(int dayNum){
    string dayName;

    switch(dayNum){
    case 0:
        dayName = "sunday";
        break;
    case 1:
        dayName = "monday";
        break;
    case 2:
        dayName = "tuesday";
        break;
    case 3:
        dayName = "wednesay";
        break;
    case 4:
        dayName = "thursday";
        break;
    default:
        dayName = "Inavlid name";
    }
    return dayName;
}

int main(){
    cout << getDayOfWeek(20);
    return 0;
}