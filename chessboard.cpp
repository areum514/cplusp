//*****************************************************************
//Chessbaord Progrm
//this program prints a chessboard pattern that is built up from
//basic strings of white and black characters
//*****************************************************************
#include <iostream>
#include <string>
using namespace std;

void PrintStartWhite(int n);
void PrintStartBlack(int n);

const string WHITE = "        ";
const string BLACK = "********";

string whilteRow = WHITE + BLACK + WHITE + BLACK + WHITE + BLACK + WHITE + BLACK;
string blackRow = BLACK + WHITE + BLACK + WHITE + BLACK + WHITE + BLACK + WHITE;

int main(){
    for (int i=0;i<4;i++){
    PrintStartWhite(5);
    PrintStartBlack(5);
    }
}

void PrintStartWhite(int n){
    for (int i=0;i<n;i++){
        cout << whilteRow << endl;
    }
}
void PrintStartBlack(int n){
    for (int i = 0; i < n; i++){
        cout << blackRow << endl;
    }
}