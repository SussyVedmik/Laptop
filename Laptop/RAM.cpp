#include "RAM.h"
#include<iostream>
using namespace std;


RAM::RAM()
{
	model = nullptr;
	price = 0.0;
}

RAM::RAM(const char* m, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->price = pr;
}

RAM::~RAM()
{
	delete[]this->model;
}

void RAM::Input()
{
	cout << endl;
	cout << "Enter RAM model: ";
	cin >> model;
	cout << endl;
	cout << "Enter RAM price: ";
	cin >> price;
}

void RAM::Print()
{
	cout << endl;
	cout << "Model - " << model << endl;
	cout << "Price - " << price << endl;
}

char* RAM::GetModel()
{
	return model;
}

double RAM::GetPrice()
{
	return 0.0;
}

void RAM::SetModel(const char* m)
{
	if (model != nullptr)
	{
		cout << model << "... delete\n";
		delete[]model;
	}
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

void RAM::SetPrice(double pr)
{
}