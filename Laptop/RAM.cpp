#include <iostream>
#include "RAM.h"
using namespace std;

RAM::RAM()
{
	name = nullptr;
	type = nullptr;
	speed = nullptr;
	price = 0.0;
	cout << "Constructor by default\n";
}
RAM::RAM(const char* n, const char* t, const char* s, double pr4)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
	speed = new char[strlen(s) + 1];
	strcpy_s(speed, strlen(s) + 1, s);
	price = pr4;
}
RAM::RAM(const RAM& obj4)
{
	name = new char[strlen(obj4.name) + 1];
	strcpy_s(name, strlen(obj4.name) + 1, obj4.name);
	type = new char[strlen(obj4.type) + 1];
	strcpy_s(type, strlen(obj4.type) + 1, obj4.type);
	speed = new char[strlen(obj4.speed) + 1];
	strcpy_s(speed, strlen(obj4.speed) + 1, obj4.speed);
	price = obj4.price;
}
void RAM::Print()
{
	cout << "Name: " << name << "\tType: " << type << "\tSpeed: " << speed << "\tPrice: " << price << endl;
}
RAM::~RAM()
{
	delete[] name;
	delete[] type;
	delete[] speed;
	cout << "Destructor\n";
}

char* RAM::GetName() const
{
	return name;
}
char* RAM::GetType() const
{
	return type;
}
char* RAM::GetSpeed() const
{
	return speed;
}
double RAM::GetPrice() const
{
	return price;
}
void RAM::SetName(char* n)
{
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
void RAM::SetType(char* t)
{
	if (type != nullptr) {
		cout << type << "...delete\n";
		delete[] type;
	}
	type = new char[strlen(t) + 1];
	strcpy_s(name, strlen(t) + 1, t);
}
void RAM::SetSpeed(char* s)
{
	if (speed != nullptr) {
		cout << speed << "...delete\n";
		delete[] speed;
	}
	speed = new char[strlen(s) + 1];
	strcpy_s(speed, strlen(s) + 1, s);
}
void RAM::SetPrice(double pr4)
{
	if (pr4 <= 0.0) {
		cout << "The value of the machine is greater than 0!" << endl;
	}
	else {
		price = pr4;
	}
}