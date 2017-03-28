#include <iostream>
#include "Student.h";
using namespace std;

int main() {
    Student jon("Jonathan Martin");
    Student fred("Fred Norris");
    jon.setID(1234);
    cout << jon.getName() << " and " << fred.getName() << endl;
    jon += fred;
    cout << jon.getName() << endl;
    /*
    if (jon.equals(fred)) 
        cout << "Same Student!" << endl;
    else
    cout << "Students are not the same." << endl;
    if (jon == fred)
        cout << "Same Student!" << endl;
    else
        cout << "Students are not the same." << endl;
        */
    return 0;
}