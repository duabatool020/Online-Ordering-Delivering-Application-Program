#pragma once
#include<iostream>
using namespace std;
class ElectronicDevice //base class //Abstract class
{
protected:
	float price;
	int yearOfManufacturing;
	float weight;
public:
	ElectronicDevice();
	ElectronicDevice(float p, int yom, float w);
	void setEdevice(float p, int yom, float w);
	float getPrice();
	float getWeight();
	int getYOM();
	virtual float DeliveryCharges() = 0;//pure virtual function
	virtual bool isDutyFree() = 0;//pure virtual function
	void DispalyEDevice();
};
