//*****************************************************************
//SPECIFICATION FILE(TimeOfDay.h)
//This file fives the specification
//of a TimeOfDay abstract data type
//******************************************************************
#include "RelationType.h"
class TimeOfDay{
public:
    //Constructors
    TimeOfDay();
    //Post:hours,minutes, and seconds have been set to 0
    TimeOfDay(int initHours, int initMinutes, int iniSeconds);
    //Pre: 0<=hours<=23, 0<=minutes<=59, 0<=seconds<=59
    //Post: TimeOfDay is set according to the incoming parameters
    
    int GetHours() const;
    int GetMinutes() const;
    int GetSeconds() const;
    RelationType ComparedTo(TimeOfDay otherTimeOfDay);
    //post: returns BEFORE if instace comes before otherDay;
    //      returns SAM if instace and otherDay are same;
    //      returns AFTER if instace comes after otherDay;

private : 
    int hours;
    int minutes;
    int seconds;
};