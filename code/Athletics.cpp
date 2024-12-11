#include "Athletics.h"
#include <iostream>
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
