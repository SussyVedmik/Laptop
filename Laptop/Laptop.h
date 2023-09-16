#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "VideoCard.h"
using namespace std;

class Laptop
{
private:
	char* name;
	char* color;
	int year;
	double price;
	CPU cpu;
	SSD ssd;
	VideoCard gpu;
	RAM ram;
public:
	static int count;
	Laptop();
	Laptop(const char* n, const char* c, int y, double p,
		const char* cpuName, const char* cpuSpeed, int cpuYear, double cpuPrice,
		const char* ssdName, const char* ssdSpeed, double ssdPrice,
		const char* gpuName, const char* gpuModel, int gpuPower, int gpuYear, double gpuPrice,
		const char* ramName, const char* ramType, const char* ramSpeed, double ramPrice);
	Laptop(const Laptop& obj);
	void Print();
	~Laptop();

	void WholePrice() const;
	static void LaptopCounter();
};