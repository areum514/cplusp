//*****************************************************************
//SPECIFICATION FILE(TimeOfDay.h)
//This file fives the specification
//of a TimeOfDay abstract data type
//******************************************************************
#include "string.h"
#include "iostream"
#include "RelationType.h"

using namespace std;

class Name{
    public:
        Name();
        Name(string FirstName, string MiddleNmae, string LastName);
        string GetFirstName() const;
        string GetMiddleName() const;
        string GetLastName() const;
        char GetMiddleInitial() const;
        RelationType CamparedToName(Name otherName) const;

    private:
        string first;
        string last;
        string middle;
};
