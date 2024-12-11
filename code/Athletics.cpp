#include "Athletics.h"
#include <iostream>
#include <cstring>
#include <fstream>
#include <conio.h>
#include <algorithm>

using namespace std;

athletics *head = nullptr;
athletics *tail = nullptr;

athletics *createAthletics(int code_number) {
    athletics *newAthletics = new athletics();
    newAthletics->code_number = code_number;
    newAthletics->name = "Not Found Athletics Name";
    newAthletics->gender = "Not Found Athletics Gender";
    newAthletics->country_code = "Not Found Athletics Country_Code";
    newAthletics->country = "Not Found Athletics Country";
    newAthletics->language = "Not Found Athletics Language";
    newAthletics->next = NULL;
    newAthletics->prev = NULL;
    return newAthletics;
}

athletics *createAthletics(string name) {
    athletics *newAthletics = new athletics();
    newAthletics->code_number = -1;
    newAthletics->name = name;
    newAthletics->gender = "Not Found Athletics Gender";
    newAthletics->country_code = "Not Found Athletics Country_Code";
    newAthletics->country = "Not Found Athletics Country";
    newAthletics->language = "Not Found Athletics Language";
    newAthletics->next = NULL;
    newAthletics->prev = NULL;
    return newAthletics;
}

athletics *createAthletics(athletics *ath) {
    athletics *newAthletics = new athletics();
    newAthletics->code_number = ath->code_number;
    newAthletics->name = ath->name;
    newAthletics->gender = ath->gender;
    newAthletics->country_code = ath->country_code;
    newAthletics->country = ath->country;
    newAthletics->language = ath->language;
    newAthletics->next = NULL;
    newAthletics->prev = NULL;
    return newAthletics;
}

athletics *createAthletics(int code_number, string name) {
    athletics *newAthletics = new athletics();
    newAthletics->code_number = code_number;
    newAthletics->name = name;
    newAthletics->gender = "Not Found Athletics Gender";
    newAthletics->country_code = "Not Found Athletics Country_Code";
    newAthletics->country = "Not Found Athletics Country";
    newAthletics->language = "Not Found Athletics Language";
    newAthletics->next = NULL;
    newAthletics->prev = NULL;
    return newAthletics;
}

void insertAthletics(int code_number){
    athletics *newAth=createAthletics(code_number);
    if(head==NULL){
        head=newAth;
        tail=newAth;
    }
    else{
        tail->next=newAth;
        newAth->prev=tail;
        tail = newAth;

    }
    system("clear");
    cout<< " ID has Created " <<endl;
    getchar();
}

void insertAthletics(athletics *ath){
    athletics *newAth;
    if(ath!=NULL)
    newAth=createAthletics(ath);
    else{
        athletics *newAthletics = new athletics();
        
    }
}

void updateInfoByCode()
{
    system("CLS");
    string input;
    cout << "\t\t\tPARIS OLYMPICS INFORMATION SYSTEM\n\n";
    cout << "\t\t\t   Update Athlete Info by Code\n\n";

    cout << "\nEnter an Code to Update: ";
    int code;
    cin >> code;

    athletics *updCur = head;
    while (updCur != NULL) {
        if (updCur -> code_number == code) break;
        updCur = updCur -> next;
    }

    if (updCur == NULL) {
        cout << "\n\t\t\tCode was not found!" << endl;
        cout << "\t\t\tPlease try again..." << endl;
        getch();
        updateAthleteInfo(); // Need to write code
        return;
    }

    cout << "Athlete Code: " << updCur -> code_number << endl;
    cout << "\nSerial\t" << "Info" << endl;
    cout << "1.\t" << "Name\t\t\t: " << updCur -> name << endl;

    if (updCur -> gender == "Not Found Athletics Gender") {
        cout << "2.\t" << "Gender\t\t\t: " << "Not Given" << endl; 
    } else {
        cout << "2.\t" << "Gender\t\t\t: " << updCur -> gender << endl;
    }
    if (updCur -> country_code == "Not Found Athletics Country_Code") {
        cout << "3.\t" << "Country Code\t\t\t: " << "Not Given" << endl; 
    } else {
        cout << "3.\t" << "Country Code\t\t\t: " << updCur -> country_code << endl;
    }
    if (updCur -> country == "Not Found Athletics Country") {
        cout << "4.\t" << "Country\t\t\t: " << "Not Given" << endl; 
    } else {
        cout << "4.\t" << "Country\t\t\t: " << updCur -> country << endl;
    }
    if (updCur -> language == "Not Found Athletics Language") {
        cout << "5.\t" << "Language\t\t\t: " << "Not Given" << endl; 
    } else {
        cout << "5.\t" << "Language\t\t\t: " << updCur -> language << endl;
    }

// Need to inser update functions - Shaira

}


