#include "VideoCard.h"
#include<iostream>
using namespace std;


VideoCard::VideoCard()
{
	model = nullptr;
	price = 0.0;
}

VideoCard::VideoCard(const char* m, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->price = pr;
}

VideoCard::~VideoCard()
{
	delete[]this->model;
}

void VideoCard::Input()
{
	cout << endl;
	cout << "Enter VideoCard model: ";
	cin >> model;
	cout << endl;
	cout << "Enter VideoCard price: ";
	cin >> price;
}

void VideoCard::Print()
{
	cout << endl;
	cout << "Model - " << model << endl;
	cout << "Price - " << price << endl;
}

char* VideoCard::GetModel()
{
	return model;
}

double VideoCard::GetPrice()
{
	return 0.0;
}

void VideoCard::SetModel(const char* m)
{
	if (model != nullptr)
	{
		cout << model << "... delete\n";
		delete[]model;
	}
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

void VideoCard::SetPrice(double pr)
{
}
