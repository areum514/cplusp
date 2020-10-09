//*****************************************************
//윤년구하는 프로그램
//이 프로그램은 사용자로 부터 year을 받아 윤년인지 아닌지 출력함
//만약 윤년이 아니라면 다음 윤년을 출력함
//*****************************************************

#include <iostream>
using namespace std;

bool isLeapYear(int year);
int nextLeapYear(int year);

int main(){

    int year=0;

    cout<<"enter a year AD, for example, 1997."<<endl;
    
    cin>>year;  //read year

    if (isLeapYear(year)) //test for leap year
        cout<<year<< " is leap year"<<endl;
    else{
        cout << year << " is not leap year" << endl;
        //year가 leap year가 아니면
        //다음 leap year 알려주기
        cout << nextLeapYear(year) << " is next leap year" << endl;
    }       
}

bool isLeapYear(int year){
    if (year%4!=0)      //4로 나뉘는가?
        return false;   //안나눠지면 leap year 아님
                        //must be 4로 나눠져야함
    if (year%100!=0)    //100으로 나눠지는가?
        return true;    //나눠지면 leap year 아님
                        //must be 100으로 나눠지면 안됨
    if (year % 1000 == 0)
        return true;

    if (year % 400 != 0) //400의 배수인가?
        return false;    //배수가 아니면 leap year 아님
                             //must be 400의 배수
    return true;        //leap year
}


int nextLeapYear(int year){
    while (true){
        year+=1;
        if (isLeapYear(year))
            return year;
    }
}

