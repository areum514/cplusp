#include "Name.h"
#include <iostream>

Name::Name(){
    first=" ";
    middle=" ";
    last=" ";
}

Name::Name(string FirstName, string MiddleNmae, string LastName){
    first=FirstName;
    middle=MiddleNmae;
    last=LastName;
}

string Name::GetFirstName() const{
    return first;
}
string Name::GetMiddleName() const{
    return middle;
}
string Name::GetLastName() const{
    return last;
}
char Name::GetMiddleInitial() const{
    return middle.at(0);
}

RelationType Name::CamparedToName(Name otherName) const{
    if (last<otherName.last)
        return BEFORE;
    else if (otherName.last<last)
        return AFTER;
    else if (first < otherName.first)
        return BEFORE;
    else if (otherName.first<first)
        return AFTER;
    else if (middle<otherName.middle)
        return BEFORE;
    else if (otherName.middle<middle)
        return AFTER;
    else
        return SAME;
}