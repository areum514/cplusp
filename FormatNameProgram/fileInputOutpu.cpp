#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream inData;
    ofstream outData;
    inData.open("name.in");
    outData.open("name.out");

    string socialNum;
    string firstName;
    string lastName;
    string middleName;
    char initial;
    
    //read in data form file inData
    inData>>socialNum>>firstName>>middleName>>lastName;
    
    //access middle intial and append a period
    initial=middleName.at(0);

    outData<<firstName<<' '<<middleName<<' '<<lastName<<' '<< socialNum<<endl;
    outData << firstName << ' ' << initial << ". " << lastName ;

    return 0;
}