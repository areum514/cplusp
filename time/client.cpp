//*****************************************************************
//A program to create two time objects
//and manipulate them.
//******************************************************************

#include <iostream>
#include "TimeOfDay.h"
using namespace std;
int main (){
    TimeOfDay time1(5,30,0);
    TimeOfDay time2;
    int loopCount;
    cout << "time1: " << time1.GetHours() << ':' << time1.GetMinutes() << ':' << time1.GetSeconds()<<endl;
    cout << "time1: " << time1.GetHours() << ':' << time1.GetMinutes() << ':' << time1.GetSeconds() << endl;

   switch(time1.ComparedTo(time2)){
        case BEFORE: cout<<"first time comes before second time"<<endl;
                    break;
        case SAME:
            cout << "times are the same" << endl;
            break;
        case AFTER:
            cout << "first time comes after second time" << endl;
            break;
   }

   switch (time2.ComparedTo(time1))
   {
   case BEFORE:
       cout << "first time comes before second time" << endl;
       break;
   case SAME:
       cout << "times are the same" << endl;
       break;
   case AFTER:
       cout << "first time comes after second time" << endl;
       break;
   }

   switch (time1.ComparedTo(time1))
   {
   case BEFORE:
       cout << "first time comes before second time" << endl;
       break;
   case SAME:
       cout << "times are the same" << endl;
       break;
   case AFTER:
       cout << "first time comes after second time" << endl;
       break;
   }
   return 0; 
}

/*#include <iostream>
#include <string>
#include "Entry.h"

using namespace std;

int main() {
    Entry entry1("Susy", "Sunshine", "Smith", 12, 20, 0);
    Entry entry2("Marvin", "Moonlight", "Morgan", 10, 30, 0);

    cout << "Entry1 " << entry1.GetNameStr() << " " << entry1.GetTimeStr() << endl;
    cout << "Entry2 " << entry2.GetNameStr() << " " << entry2.GetTimeStr() << endl;

    return 0;
}*/