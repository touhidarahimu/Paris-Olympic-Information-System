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

void insertAthletics(athletics *ath) {
    athletics *newAth;
    if (ath != NULL) {
        newAth = createAthletics(ath);
    } else {
        athletics *newAthletics = new athletics();

        cout << "\nEnter Code_Number: ";
        int code_number; cin >> code_number; 
        if (foundCodeNumber(code_number)) {
            cout << "\n\n\tCode_Number already Inserted" << endl << endl;
            cout << "Press any key to continue...";
            getchar();
            return;
        } else {
            newAthletics -> code_number = code_number;
        }

        cout << "Enter Name: ";
        string name; getline(cin >> ws, name); newAthletics -> name = name;
        cout << "Enter Gender: ";
        string gender; cin >> gender; newAthletics -> gender = gender;
        cout << "Enter Country_code: ";
        string country_code; cin >> country_code; newAthletics -> country_code = country_code;
        cout << "Enter Country: ";
        string country; getline(cin >> ws, country); newAthletics -> country = country;
        cout << "Enter Language: ";
        string language; getline(cin >> ws, language); newAthletics -> language = language;
        

        newAthletics -> next = NULL;
        newAthletics -> prev = NULL;

        newAth = createAthletics(newAthletics);       
    }
    
    if (head == NULL) {
        head = newAth;
        tail = newAth;
    } else {
        tail -> next = newAth;
        newAth -> prev = tail;
        tail = newAth;
    }
}

void insertAthletics(int code_number, string name) {
    athletics *newAth = createAthletics(code_number, name);

    if (head == NULL) {
        head = newAth;
        tail = newAth;
    } else {
        tail -> next = newAth;
        newAth -> prev = tail;
        tail = newAth;
    }

    system("CLS");
    cout << "\t\t\tA new ID with Name has been created!";
    cout << "\n\nPress any key to continue.....";
    getchar();
}



void updateData() {
    system("clear");
    cout << "\t\t\t PARIS OLYMPIC INFORMATION SYSTEM\n\n";
    cout << "\t\t\tUpdate Incomplete Information\n\n";

    athletics *updateCurrent = head;
    while (updateCurrent!= NULL) {
        if (!isComplete(updateCurrent)) {
            cout << "\n\tUpdating Athletics Code_Number: " << updateCurrent ->code_number  << endl << endl;
            if (updateCurrent -> name == "Not Given") {
                cout << "Enter Name: ";
                string name; getline(cin >> ws, name);
               updateCurrent -> name = name;
            }
       
            if (updateCurrent -> gender == "Not Given") {
                cout << "Enter Gender: ";
                string gender; getline(cin >> ws, gender);
               updateCurrent -> gender = gender;
            }
            if (updateCurrent -> country_code == "Not Given") {
                cout << "Enter Country_Code: ";
                string country_code; getline(cin >> ws, country_code);
               updateCurrent -> country_code = country_code;
            }
            if (updateCurrent -> country == "Not Given") {
                cout << "Enter Country: ";
                string country; getline(cin >> ws, country);
               updateCurrent -> country = country;
            }
            if (updateCurrent -> language == "Not Given") {
                cout << "Enter Language: ";
                string language; getline(cin >> ws, language);
                updateCurrent -> language = language;
            }
            
            
        } updateCurrent = updateCurrent -> next;
    }

    system("clear");
    cout << "\n\n\t\t\tAll Incomplete Information has been Inserted!";
    cout << "\n\nPress any key to continue.....";
    getchar();
}

void updateInfoCodeNumber() {
    system("clear");
    string input;
    cout << "\t\t\tPARIS OLYMPIC INFORMATION SYSTEM\n\n";
    cout << "\t\t\t   Update Athletics Code_Number\n\n";

    cout << "\nEnter Code_Number to Update: ";
    int code_number; cin >> code_number;

    athletics *updateCurrent = head;
    while (updateCurrent != NULL) {
        if (updateCurrent ->code_number == code_number) break;
        updateCurrent = updateCurrent -> next;
    }

    if (updateCurrent == NULL) {
        cout << "\n\t\t\tCode_Number was not found!" << endl;
        cout << "\t\t\tPlease try again..." << endl;
        getchar();
        updateAthleticsInfo();
        return;
    }
    cout << "Student Code_Number: " << updateCurrent -> code_number << endl;
    cout << "\nSerial\t" << "Info" << endl;
    cout << "1.\t" << "Name\t\t\t: " <<updateCurrent -> name << endl;
    cout << "2.\t" << "Gender\t\t\t: " << updateCurrent -> gender << endl;
    cout << "3.\t" << "Country_Code\t\t\t: " << updateCurrent -> country_code << endl;
    cout << "4.\t" << "Country\t\t\t: " << updateCurrent -> country << endl;
    cout << "5.\t" << "Language\t\t\t: " << updateCurrent -> language<< endl;

    string str = "yes";
    while (str== "yes") {
        cout << "\nWant to Update Anything? YES / NO : ";
        cin >> str;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        if (str== "yes") {
            cout << "Enter a Serial to Update: ";
            int serial; cin >> serial;
            if (serial == 1) {
                cout << "\nEnter Name to Update: ";
                string name; getline(cin >> ws, name);
               updateCurrent -> name = name;
            }  else if (serial == 2) {
                cout << "Enter Gender to Update: ";
                string gender; cin >> gender;
               updateCurrent -> gender = gender;
            } else if (serial == 3) {
                cout << "Enter Country_Code to Update: ";
                string country_code; cin >> country_code;
                updateCurrent -> country_code = country_code;
            } else if (serial == 4) {
                cout << "Enter Country to Update: ";
                string country; cin >> country;
               updateCurrent -> country = country;
            } else if (serial == 5) {
                cout << "Enter Language to Update: ";
                string language; cin >> language;
               updateCurrent -> language = language;
            }  else {
                cout << "Invalid Serial!" << endl;
            }
        } else {
            updateAthleticsInfo();
        }
    }
}

void deleteAllInfo(){
    while (true) {
        athletics *temp = head;
        if (temp == NULL) {
            head = NULL;
            tail = NULL;
            return;
        }
        if (head == tail) {
            head = NULL;
            tail = NULL;
        }
        else {
            head = head -> next;
            head -> prev = NULL;
        }
        delete temp;
    }
}

void deleteNode(athletics*delNode) {
    if (head == tail) {
        head = NULL;
        tail = NULL;
        delete delNode;
        return;
    }
    if (head == delNode) {
        head = head -> next;
        head -> prev = NULL;
    }
    if (tail == delNode) {
        tail -> prev -> next = NULL;
        tail = tail -> prev;
    }
    if (head == tail) return;
    if (delNode -> next != NULL) {
        delNode -> next -> prev = delNode -> prev;
    }
    if (delNode -> prev != NULL) {
        delNode -> prev -> next = delNode -> next;
    }
    delete delNode;
    return;
}

void deleteCodeNumber(int code_number){
    athletics *current = head;
    while (current != NULL) {
        if (current -> code_number == code_number) {
            deleteNode(current);
            return;
        } current = current -> next; 
    }
}

void deleteName(string name) {
    athletics *current = head;
    while (current != NULL) {
        if (compareString(current -> name, name)) {
            deleteNode(current);
            return;
        } current = current -> next; 
    }
}



bool foundCodeNumber(int code_number) {
    athletics *current = head;
    while (current != NULL) {
        if (current -> code_number == code_number) {
            return true;
        } current = current -> next;
    } return false;
}

bool foundName(string name) {
    athletics *current = head;
    while (current != NULL) {
        if (compareString(current -> name, name)) {
            return true;
        } current = current -> next;
    } return false;
}


bool isComplete(athletics*ath) {
    if (ath -> code_number == 1) return false;
    if (ath -> name == "Not Given") return false;
    if (ath -> gender == "Not Given") return false;
    if (ath -> country_code == "Not Given") return false;
    if (ath -> country == "Not Given") return false;
    if (ath -> language== "Not Given") return false;
    
    return true;
}


bool compareString(string s1, string s2) {
    string str1 = s1;
    string str2 = s2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (str1 == str2) return true;
    else return false;
}

void searchCodeNumber(int code_number) {
    athletics *current = head;
    while (current != NULL) {
        if (current -> code_number == code_number) {
            return;
        } current = current -> next;
    }
    cout << "Invalid Code_Number!" << endl;
}
//error slove end



