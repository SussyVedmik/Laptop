#include "CPU.h"
#include<iostream>
using namespace std;


CPU::CPU()
{
	model = nullptr;
	price = 0.0;
}

CPU::CPU(const char* m, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->price = pr;
}

CPU::~CPU()
{
	delete[]this->model;
}

void CPU::Input()
{
	cout << endl;
	cout << "Enter CPU model: ";
	cin >> model;
	cout << endl;
	cout << "Enter CPU price: ";
	cin >> price;
}

void CPU::Print()
{
	cout << endl;
	cout << "Model - " << model << endl;
	cout << "Price - " << price << endl;
}

char* CPU::GetModel()
{
	return model;
}

double CPU::GetPrice()
{
	return 0.0;
}

void CPU::SetModel(const char* m)
{
	if (model != nullptr)
	{
		cout << model << "... delete\n";
		delete[]model;
	}
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

void CPU::SetPrice(double pr)
{
}
