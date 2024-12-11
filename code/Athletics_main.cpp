#include <iostream>
#include "Athletics.h"

using namespace std;

int main() {
    // Create athletics objects using different constructors
    athletics *ath1 = createAthletics(1003);              // Create using code number
    athletics *ath2 = createAthletics("mark ");       // Create using name
    athletics *ath3 = createAthletics(ath1);            // Copy an existing athletics object
    athletics *ath4 = createAthletics(1002, "Jane Doe"); // Create using code number and name

    // Display details of the athletics objects
    cout << "Athlete 1: Code = " << ath1->code_number << ", Name = " << ath1->name << endl;
    cout << "Athlete 2: Code = " << ath2->code_number << ", Name = " << ath2->name << endl;
    cout << "Athlete 3 (Copy of Athlete 1): Code = " << ath3->code_number << ", Name = " << ath3->name << endl;
    cout << "Athlete 4: Code = " << ath4->code_number << ", Name = " << ath4->name << endl;

    // Free dynamically allocated memory
    delete ath1;
    delete ath2;
    delete ath3;
    delete ath4;

    return 0;
}


//zsh terminal run command
// cd "/Users/himu/Desktop/Paris Olympic Information System/code/"
// g++ Athletics_main.cpp Athletics.cpp -o Athletics_main
// ./Athletics_main


//bash terminal command
// cd "/Users/himu/Desktop/Paris Olympic Information System/code/" 
// g++ Athletics_main.cpp Athletics.cpp -o Athletics_main
// ./Athletics_main
