#include <iostream>
#include <cstring>
using namespace std;


struct athletics
{
   int code_number;
    string name;
    string gender;
    string country_code;
    string country;
    string language;

    athletics *next,*prev;
   
};

extern athletics *head;
extern athletics *tail;

athletics *createAthletics(int code_number);//done
athletics *createAthletics(string name);//done
athletics *createAthletics(athletics *ath);//done
athletics *createAthletics(int code_number,string name);//done

void insertAthletics(int code_number);//done
void insertAthletics(athletics *ath);//done
void insertAthletics(int code_number,string name);//done

void updateData();//done
void updateInfoCodeNumber();//done

 void deleteNode(athletics *delNode);
void deleteAllInfo();//done
void deleteCodeNumber(int code_number);//done
void deleteName(string name);//done

bool foundCodeNumber(int code_number);//done
bool foundName(string name);//done
bool isComplete(athletics *ath);//done
bool compareString(string s1, string s2);//done


void searchCodeNumber(int code_number);
void searchName(string name);
void searchGender(string gender);
void searchCountryCode(string country_code);
void searchCountry(string country);
void searchLanguage(string language);


void sortCodeNumber( int code_number);
void sortName(string name);
void sortCountryCode(string country_code);
void sortCountry(string country);
void sortLanguage(string language);


int menu();
void showAthleticsInfo();
void addAthleticsInfo();
void updateAthleticsInfo();
void deleteAthleticsInfo();
void searchAthleticsInfo();
void sortAthleticsInfo();


void inputManipulation();
void outputManipulation();


void updatePartialData();
void updateInfoByCode();




