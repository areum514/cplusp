//******************************************
//This program counts the occurrences of "!=" in a data file
//******************************************

#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int count=0;
    char prevChar;
    char currChar;
    ifstream inFile;

    inFile.open("./myfile.dat");
    if( !inFile ){
        cout<<"file does not exit"<<endl;
        return 1;
    }
    
    inFile.get(prevChar);
    inFile.get(currChar);

    while (inFile){
        if (prevChar=='!'&& currChar=='=')
            count += 1;
        prevChar=currChar;
        inFile.get(currChar);
    }
    cout << count << " != operations were found." << endl;

    return 0;
}