#include <iostream>
#include "VideoCard.h"
using namespace std;

VideoCard::VideoCard()
{
	name = nullptr;
	model = nullptr;
	power = 0;
	year = 0;
	price = 0.0;
	cout << "Constructor by default\n";
}
VideoCard::VideoCard(const char* n, const char* m, int p, int y, double pr3)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
	power = p;
	year = y;
	price = pr3;
}
VideoCard::VideoCard(const VideoCard& obj3)
{
	name = new char[strlen(obj3.name) + 1];
	strcpy_s(name, strlen(obj3.name) + 1, obj3.name);
	model = new char[strlen(obj3.model) + 1];
	strcpy_s(model, strlen(obj3.model) + 1, obj3.model);
	power = obj3.power;
	year = obj3.year;
	price = obj3.price;
}
void VideoCard::Print()
{
	cout << "Name: " << name << "\tModel: " << model << "\tPower: " << power << "\tYear: " << year << "\tPrice: " << price << endl;
}
VideoCard::~VideoCard()
{
	delete[] name;
	delete[] model;
	cout << "Destructor\n";
}

char* VideoCard::GetName() const
{
	return name;
}
char* VideoCard::GetModel() const
{
	return model;
}
int VideoCard::GetPower() const
{
	return power;
}
int VideoCard::GetYear() const
{
	return year;
}
double VideoCard::GetPrice() const
{
	return price;
}
void VideoCard::SetName(char* n)
{
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
void VideoCard::SetModel(char* m)
{
	if (model != nullptr) {
		cout << model << "...delete\n";
		delete[] model;
	}
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}
void VideoCard::SetPower(int p)
{
	power = p;
}
void VideoCard::SetYear(int y)
{
	year = y;
}
void VideoCard::SetPrice(double pr3)
{
	if (pr3 <= 0.0) {
		cout << "The value of the machine is greater than 0!" << endl;
	}
	else {
		price = pr3;
	}
}
