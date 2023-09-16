#include<iostream>
#include "CPU.h"
#include "SSD.h"
#include "VideoCard.h"
#include "RAM.h"
#include "Sum.h"
#include "Laptop.h"
using namespace std;

int Laptop::count = 0;

int main() {


	Laptop lap1("MacBook", "Silver", 2016, 90000,

	"AMD", "3500 mhz", 2016, 8000,

	"Samsung", "15000 mb/s", 5000,

	"Radeon", "Pro", 300, 2023, 7700,

	"Hyper", "DDDR4", "3500 mhz", 4000);


	///////////////////////////////////////////


	Laptop lap2("Acer", "Black", 2020, 30000,

	"Intel", "2700 mhz", 2020, 5000,

	"Kingston", "8000 mb/s", 4600,

	"Nvidia", "GTX 1650", 140, 2019, 6000,

	"Hyper", "DDR4", "4000 mhz", 1000);

	///////////////////////////////////////////

	cout << "\t";

	lap1.Print();
	lap1.WholePrice();
	cout << endl;
	lap2.Print();
	lap2.WholePrice();
	cout << endl;
	Laptop::LaptopCounter();

	system("pause");
}