#include<iostream>
#include"Electronic Device.h"
#include"Mobile Phone.h"
#include"Computer Notebook.h"
#include"functions.h";
using namespace std;

int main()
{
	ComputerNotebook cn,cn1,cn2;
	MobilePhone m, m1, m2, m3;
	m.setPhone("Infinix note 8", 30000.500f, 2019, 214.5f);
	m1.setPhone("Infinix zero 8i", 35000.500f, 2018, 213.01f);
	m2.setPhone("Infinix note 6 pro ", 20000.01f, 2007, 200.2f);
	m3.setPhone("Infinix Hot S3", 25000.35f, 2008, 200.2f);
	cn.setCNotebook("Apple", 80000.500f, 2007, 250.5f);
	cn1.setCNotebook("Dell", 50000.500f, 2005, 350.5f);
	cn2.setCNotebook("lenovo", 45000.500f, 2020, 300.0f);
	ComputerNotebook cm[] = { cn,cn1,cn2 };
	MobilePhone mob[] = { m,m1,m2,m3 };
	Welcome();//function is defined in function.cpp
	shopping(cm, mob);//function is defined in function.cpp
	system("pause");
	return 0;
}