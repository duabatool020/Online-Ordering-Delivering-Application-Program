#include<iostream>
#include"functions.h"
#include"Electronic Device.h"
#include"Mobile Phone.h"
#include"Computer Notebook.h"
using namespace std;
void Welcome()
{
	cout << "****************************Welcome to Online Electronic Device Application***********************" << endl;
}
void Choice()
{
	cout << "*****************Press n for \"Computer Notebook\" , press m for \"Mobile Phone\"*****************" << endl;
}
void showCBooks()
{
	cout << "Which computer notebook you want to buy: " << endl;
	cout << "Press 1 for Apple " << endl;
	cout << "Press 2 for Dell " << endl;
	cout << "Press 3 for Lenovo " << endl;
}

void showMobile()
{
	cout << "Which phone you want to buy: " << endl;
	cout << "Press 0 for Infinix note 8" << endl;
	cout << "Press 1 for Infinix zero 8i" << endl;
	cout << "Press 2 for Infinix note 6 pro " << endl;
	cout << "Press 3 for Infinix Hot S3" << endl;
}
void shopping( ComputerNotebook cm[], MobilePhone m[])
{
	char c, shop;
	ElectronicDevice* e;//pointer of base class
	do
	{
		Choice();
		cin >> c;
		switch (c)
		{
		case 'n':
			showCBooks();
			int n;
			cin >> n;
			switch (n)
			{
			case 1:
				e = &cm[0];//upcasting //storing address of derived object to base object
				e->DeliveryCharges();//dynamic binding
				cm[0].displayCNotebook();
				e->isDutyFree();//dynamic binding
				break;

			case 2:
				e = &cm[1];//upcasting //storing address of derived object to base object
				e->DeliveryCharges();//dynamic binding
				cm[1].displayCNotebook();
				e->isDutyFree();//dynamic binding
				break;
			case 3:
				e = &cm[2];
				e->DeliveryCharges();
				
				cm[2].displayCNotebook();
				e->isDutyFree();
				break;
			default:
				cout << "Invalid choice" << endl;
			}
			break;
		case'm':
			showMobile();
			int x;
			cin >> x;
			switch (x)
			{
			case 0:
				e = &m[0];
				e->DeliveryCharges();
				e->isDutyFree();
				m[0].displayPhone();
				break;
			case 1:
				e = &m[1];
				e->DeliveryCharges();
				e->isDutyFree();
				m[1].displayPhone();
				break;
			case 2:
				e = &m[2];
				e->DeliveryCharges();
				e->isDutyFree();
				m[2].displayPhone();
				break;
			case 3:
				e = &m[3];
				e->DeliveryCharges();
				e->isDutyFree();
				m[3].displayPhone();
				break;
			default:
				cout << "Invalid choice" << endl;
			}
		}
		cout << endl;
		cout << "Your order has been confirmed " << endl;
		cout << "Do you want to continue shopping (y/n): " << endl;
		cin >> shop;
	} while (shop == 'y');
		cout << "Thank u for shopping!" << endl;
		cout << "Your order will be delivered in 3-4 days " << endl;
	
}