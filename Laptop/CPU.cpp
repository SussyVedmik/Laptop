#include <iostream>
#include "CPU.h"
using namespace std;

CPU::CPU() {
	name = nullptr;
	speed = nullptr;
	year = 0;
	price = 0.0;
	cout << "Constructor by default\n";
}
CPU::CPU(const char* n, const char* s, int y, double pr1) {
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	speed = new char[strlen(s) + 1];
	strcpy_s(speed, strlen(s) + 1, s);
	year = y;
	price = pr1;
}
CPU::CPU(const CPU& obj1)
{
	name = new char[strlen(obj1.name) + 1];
	strcpy_s(name, strlen(obj1.name) + 1, obj1.name);
	speed = new char[strlen(obj1.speed) + 1];
	strcpy_s(speed, strlen(obj1.speed) + 1, obj1.speed);
	year = obj1.year;
	price = obj1.price;
}
void CPU::Print()
{
	cout << "Name: " << name << "	Speed: " << speed << "	Year: " << year << "	Price: " << price << endl;
}
CPU::~CPU() {
	delete[] name;
	delete[] speed;
	cout << "Destructor\n";
}

char* CPU::GetName() const {
	return name;
}
char* CPU::GetSpeed() const {
	return speed;
}
int CPU::GetYear() const {
	return year;

}
double CPU::GetPrice() const {
	return price;
}
void CPU::SetName(char* n) {
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
void CPU::SetSpeed(char* s) {
	if (speed != nullptr) {
		cout << speed << "...delete\n";
		delete[] speed;
	}
	speed = new char[strlen(s) + 1];
	strcpy_s(name, strlen(s) + 1, s);
}
void CPU::SetYear(int y) {
	year = y;
}
void CPU::SetPrice(double pr1) {
	if (pr1 <= 0.0) {
		cout << "The value of the machine is greater than 0!" << endl;
	}
	else {
		price = pr1;
	}
}
