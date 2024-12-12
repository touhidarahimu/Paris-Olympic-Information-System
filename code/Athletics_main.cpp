#include <iostream>
#include "Athletics.h"

using namespace std;

int main() {
    inputManipulation();
    int input;
    while (input != 0) {
        input = menu();
        if (input == 1) {
            showAthleticsInfo();
            cout<<"\nPress any key to return Main Menu...";
            getchar();
        } else if (input == 2) {
            addAthleticsInfo();
        } else if (input == 3) {
            updateAthleticsInfo();
        } else if (input == 4) {
            deleteAthleticsInfo();
        } else if (input == 5) {
            searchAthleticsInfo();
        } else if (input == 6) {
            sortAthleticsInfo();
        } 
        else if (input == 0) {
            outputManipulation();
            exit(0);
        } else {
            cout << "\n\t\t\tInvalid Option!!" << "\n";
            cout << "\t\t       Please try again..." << "\n";
            cout << "\n";
            cout << "Press any key to continue...";
            getchar();
        }
    }
}

//zsh terminal run command
// cd "/Users/himu/Desktop/Paris Olympic Information System/code/"
// g++ Athletics_main.cpp Athletics.cpp -o Athletics_main
// ./Athletics_main


//bash terminal command
// cd "/Users/himu/Desktop/Paris Olympic Information System/code/" 
// g++ Athletics_main.cpp Athletics.cpp -o Athletics_main
// ./Athletics_main
