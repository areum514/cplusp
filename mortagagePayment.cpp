//*****************************************************************
//Mortagage Payment Calculate program
//This progrm determines the monthly payments on a mortgage finve
//the lan amount, the yearly interest, and the number of years.
//*****************************************************************

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


const float LOAN_AMOUNT =50000;
const float YEARLY_INTEREST = 0.0524;
const int NUMBER_OF_YEARS = 0.0524;

int main(){
    float mouthlyInterest=0.0;
    int numberOfPayments=0;
    int payment=0;

    mouthlyInterest = YEARLY_INTEREST/12;
    numberOfPayments = NUMBER_OF_YEARS*12;
    payment = (LOAN_AMOUNT * pow(1 + mouthlyInterest, numberOfPayments) * mouthlyInterest) / (pow(1 + mouthlyInterest, numberOfPayments)-1);

    cout<< fixed <<setprecision(2) <<"For a loan amount of "<<LOAN_AMOUNT<<" with an interest tate of "<<YEARLY_INTEREST <<" and a "<<NUMBER_OF_YEARS<<" year mortage. "<<endl;
    cout<<" your monthly payments are $"<<payment<<"."<<endl;
    return 0; 
}