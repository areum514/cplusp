//******************************************************
//Program reads a file and prints the line number
//and the number of characters in the line
//******************************************************
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void LetterCount(string line);
void LineCount(istream& file, int& count);

int main()
{
    ifstream inFile;
    inFile.open("test.dat");
    int count=0;
    LineCount(inFile,count);
    cout<<"Number of lines: "<<count<< endl;
    return 0;
}

void LetterCount(string line){
    int count=line.length();
    cout<<" has "<<count <<" characters:"<<endl;
}

void LineCount(istream& file, int& count){
    string line;
    getline(file, line);
    do {
        getline(file, line);
        count++;
        cout << "Line " << count;
        LetterCount(line);
    } while (file) ;    
}