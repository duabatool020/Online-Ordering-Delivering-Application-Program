#pragma once
#include<iostream>
#include"Electronic Device.h"
using namespace std;
class ComputerNotebook: public ElectronicDevice   //derived class
{
private:
    string name;
public:
    ComputerNotebook();
    ComputerNotebook(string n,float p, int yom, float w);
    void setCNotebook(string n,float p, int yom, float w);
    float DeliveryCharges();//overriding function //virtual function
    bool isDutyFree();//overriding function //virtual function
    void displayCNotebook();

 };
