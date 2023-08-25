#include<iostream>
#include"Electronic Device.h";
using namespace std;

ElectronicDevice::ElectronicDevice()
{
	price = weight = 0.0;
	yearOfManufacturing = 0;
}

ElectronicDevice::ElectronicDevice(float p, int yom, float w)
{
	price = p;
	yearOfManufacturing = yom;
	weight = w;
}
void ElectronicDevice::setEdevice(float p, int yom, float w)
{
	price = p;
	yearOfManufacturing = yom;
	weight = w;
}
float ElectronicDevice::getPrice()
{
	return price;
}
float ElectronicDevice::getWeight()
{
	return weight;
}
int ElectronicDevice::getYOM()
{
	return yearOfManufacturing;
}
void ElectronicDevice::DispalyEDevice()
{
	cout << "Price: " << "$" << price << endl;
	cout << "year of manufacturing: " << yearOfManufacturing << endl;
	cout << "weight: " << weight<<"g" << endl;
}

