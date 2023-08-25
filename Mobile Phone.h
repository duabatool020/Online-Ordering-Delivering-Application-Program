#pragma once
#include<iostream>
#include"Electronic Device.h"
using namespace std;

class MobilePhone :public ElectronicDevice    //derived class
{
private:
    string name;
public:
    MobilePhone();
    MobilePhone(string n,float p, int yom, float w);
    void setPhone(string n,float p, int yom, float w);
    float DeliveryCharges(); //overriding function //virtual function
    bool isDutyFree(); //overriding function //virtual function
    void displayPhone();
};
