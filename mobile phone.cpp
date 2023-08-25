#include<iostream>
#include"Electronic Device.h"
#include"Mobile Phone.h"
using namespace std;

MobilePhone::MobilePhone() :ElectronicDevice::ElectronicDevice()
{
	name = "";
}
MobilePhone::MobilePhone(string n,float p, int yom, float w) :ElectronicDevice::ElectronicDevice(p, yom, w)
{
	name = n;
}
void MobilePhone::setPhone(string n,float p, int yom, float w)
{
	name = n;
	ElectronicDevice::setEdevice(p, yom, w);
}
float MobilePhone::DeliveryCharges()
{
	float Total = 10.0;
	return Total;
}
bool MobilePhone::isDutyFree()
{
	if (yearOfManufacturing < 2018)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void MobilePhone::displayPhone()
{
	cout << name << endl;
	ElectronicDevice::DispalyEDevice();
	cout << "Delivery charges: " << DeliveryCharges()<<endl;
}