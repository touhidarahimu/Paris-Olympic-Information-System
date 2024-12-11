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

athletics *createAthletics(int code_number);
athletics *createAthletics(string name);
athletics *createAthletics(athletics *ath);
athletics *createAthletics(int code_number,string name);

void insertAthletics(int code_number);
void insertAthletics(athletics *ath);
void insertAthletics(int code_number,string name);




