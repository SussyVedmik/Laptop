#include "SSD.h"
#include<iostream>
using namespace std;


SSD::SSD()
{
	model = nullptr;
	price = 0.0;
}

SSD::SSD(const char* m, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->price = pr;
}

SSD::~SSD()
{
	delete[]this->model;
}

void SSD::Input()
{
	cout << endl;
	cout << "Enter SSD model: ";
	cin >> model;
	cout << endl;
	cout << "Enter SSD price: ";
	cin >> price;
}

void SSD::Print()
{
	cout << endl;
	cout << "Model - " << model << endl;
	cout << "Price - " << price << endl;
}

char* SSD::GetModel()
{
	return model;
}

double SSD::GetPrice()
{
	return 0.0;
}

void SSD::SetModel(const char* m)
{
	if (model != nullptr)
	{
		cout << model << "... delete\n";
		delete[]model;
	}
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

void SSD::SetPrice(double pr)
{
}