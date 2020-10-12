//*******************************************************************
//nameSplit program
//split full name into first, middle, last name
//*******************************************************************

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string name="John Jacob Schmidt";

    string firstName="";
    string middleName="";
    string lastName="";
    
    int index=0;


    index=name.find(' ');
    firstName = name.substr(0, index);

    name=name.substr(index+1,name.length()-1);
    index = name.find(' ');
    middleName = name.substr(0, index);
    
    name = name.substr(index + 1, name.length() - 1);
    lastName = name.substr(0, index);

    cout<<"First Name: "<<firstName<<endl;
    cout << "Middle Name: " << middleName << endl;
    cout << "Last Name: " << lastName << endl;

    return 0;
}