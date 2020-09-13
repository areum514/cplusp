//*****************************************************************
//IMPLEMENTATION FILE (TimeOfDay.cpp)
//This file Implements the TimeOfDay memger functions
//******************************************************************
#include "TimeOfDay.h"
#include <iostream>
using namespace std;

TimeOfDay::TimeOfDay(){
    hours=0;
    seconds=0;
    minutes=0;
}
//******************************************************************
TimeOfDay::TimeOfDay(int initHours, int initMinutes, int iniSeconds){
    hours = initHours;
    seconds = initMinutes;
    minutes = iniSeconds;
}
//******************************************************************
int TimeOfDay::GetHours() const{
    return hours;
}
//******************************************************************

int TimeOfDay::GetMinutes() const{
    return seconds;
}
//******************************************************************

int TimeOfDay::GetSeconds() const{
    return minutes;
}
//******************************************************************

RelationType TimeOfDay::ComparedTo(TimeOfDay otherTimeOfDay){
    if (hours<otherTimeOfDay.hours)
        return BEFORE;
    else if (hours > otherTimeOfDay.hours)
        return AFTER;
    else if (minutes<otherTimeOfDay.minutes)
        return BEFORE;
    else if (minutes > otherTimeOfDay.minutes)
        return AFTER;
    else if (seconds < otherTimeOfDay.seconds)
        return BEFORE;
    else if (seconds > otherTimeOfDay.seconds)
        return AFTER;
    else
        return SAME;
}
