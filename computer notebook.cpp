#include<iostream>
#include"Electronic Device.h"
#include"Computer Notebook.h"
using namespace std;

ComputerNotebook::ComputerNotebook() :ElectronicDevice::ElectronicDevice()
{
	name = "";
}
ComputerNotebook::ComputerNotebook(string n,float p, int yom, float w) : ElectronicDevice::ElectronicDevice(p, yom, w)
{
	name = n;
}
void ComputerNotebook::setCNotebook(string n,float p, int yom, float w)
{
	ElectronicDevice::setEdevice(p, yom, w);
	name = n;
}
float ComputerNotebook:: DeliveryCharges()
{
	float Total = 2 * weight;
	return Total;
}
bool ComputerNotebook::isDutyFree()
{
	if (price < 1000)
	{
		cout << "You have to pay the delivery charges as you have done shopping of less than 1000" << endl;
		return true;
	}
	else
	{
		cout << "You dont have to pay the delivery charges as you have done shopping of more than 1000" << endl;
		return false;
	}
}
void ComputerNotebook::displayCNotebook()
{
	cout << name << endl;
	ElectronicDevice::DispalyEDevice();
	cout << "Delivery charges: " << DeliveryCharges()<<endl;
}