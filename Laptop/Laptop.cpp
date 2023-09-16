#include <iostream>
#include "Laptop.h"
using namespace std;

Laptop::Laptop()
{
	name = nullptr;
	color = nullptr;
	year = 0;
	price = 0.0;
	CPU cpu;
	SSD ssd;
	VideoCard gpu;
	RAM ram;
	cout << "Constructor by default\n";
}
Laptop::Laptop(const char* n, const char* c, int y, double pr,
	const char* cpuName, const char* cpuSpeed, int cpuYear, double cpuPrice,
	const char* ssdName, const char* ssdSpeed, double ssdPrice,
	const char* gpuName, const char* gpuModel, int gpuPower, int gpuYear, double gpuPrice,
	const char* ramName, const char* ramType, const char* ramSpeed, double ramPrice) :
	cpu(cpuName, cpuSpeed, cpuYear, cpuPrice),
	ssd(ssdName, ssdSpeed, ssdPrice),
	gpu(gpuName, gpuModel, gpuPower, gpuYear, gpuPrice),
	ram(ramName, ramType, ramSpeed, ramPrice)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
	year = y;
	price = pr; 
	++count;
}
Laptop::Laptop(const Laptop& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	color = new char[strlen(obj.color) + 1];
	strcpy_s(color, strlen(obj.color) + 1, obj.color);
	year = obj.year;
	price = obj.price;

	cpu.SetName(obj.cpu.GetName());
	cpu.SetSpeed(obj.cpu.GetSpeed());
	cpu.SetYear(obj.cpu.GetYear());
	cpu.SetPrice(obj.cpu.GetPrice());

	ssd.SetName(obj.ssd.GetName());
	ssd.SetSpeed(obj.ssd.GetSpeed());
	ssd.SetPrice(obj.cpu.GetPrice());

	gpu.SetName(obj.gpu.GetName());
	gpu.SetModel(obj.gpu.GetModel());
	gpu.SetPower(obj.gpu.GetPower());
	gpu.SetYear(obj.gpu.GetYear());
	gpu.SetPrice(obj.gpu.GetPrice());

	ram.SetName(obj.ram.GetName());
	ram.SetType(obj.ram.GetType());
	ram.SetSpeed(obj.ram.GetSpeed());
	ram.SetPrice(obj.ram.GetPrice());
}
void Laptop::Print()
{
	cout << "Name: " << name << "\tColor: " << color << "\tYear: " << year << "\tPrice: " << price << endl;
	cpu.Print();
	ssd.Print();
	gpu.Print();
	ram.Print();
}
Laptop::~Laptop()
{
	delete[] name;
	delete[] color;
	--count;
	cout << "Destructor\n";
}

void Laptop::WholePrice() const
{
	cout << "Sum of components: " << cpu.GetPrice() + ssd.GetPrice() + gpu.GetPrice() + ram.GetPrice() << endl;
}

void Laptop::LaptopCounter()
{
	cout << "Count of Laptops: " << count << endl;
}

