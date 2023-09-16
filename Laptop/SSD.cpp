#include <iostream>
#include "SSD.h"
using namespace std;

SSD::SSD() {
	name = nullptr;
	speed = nullptr;
	price = 0.0;
	cout << "Constructor by default\n";
}
SSD::SSD(const char* n, const char* s, double pr2) {
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	speed = new char[strlen(s) + 1];
	strcpy_s(speed, strlen(s) + 1, s);
	price = pr2;
}
SSD::SSD(const SSD& obj2)
{
	name = new char[strlen(obj2.name) + 1];
	strcpy_s(name, strlen(obj2.name) + 1, obj2.name);
	speed = new char[strlen(obj2.speed) + 1];
	strcpy_s(speed, strlen(obj2.speed) + 1, obj2.speed);
	price = obj2.price;
}
void SSD::Print()
{
	cout << "Name: " << name << "\tSpeed: " << speed << "\tPrice: " << price << endl;
}
SSD::~SSD() {
	delete[] name;
	delete[] speed;
	cout << "Destructor\n";
}

char* SSD::GetName() const {
	return name;
}
char* SSD::GetSpeed() const {
	return speed;
}
double SSD::GetPrice() const {
	return price;
}
void SSD::SetName(char* n) {
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
void SSD::SetSpeed(char* s) {
	if (speed != nullptr) {
		cout << speed << "...delete\n";
		delete[] speed;
	}
	speed = new char[strlen(s) + 1];
	strcpy_s(name, strlen(s) + 1, s);
}
void SSD::SetPrice(double pr2) {
	if (pr2 <= 0.0) {
		cout << "The value of the machine is greater than 0!" << endl;
	}
	else {
		price = pr2;
	}
}
