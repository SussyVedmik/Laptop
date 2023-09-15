#include<iostream>
#include "CPU.h"
#include "SSD.h"
#include "VideoCard.h"
#include "RAM.h"
using namespace std;

class Laptop
{
	const char* x;
	double y;
	int g;
	int j;
	CPU cpu;
	SSD ssd;
	VideoCard vd;
	RAM ram;
public:
	Laptop(const char* x1, double y1) :cpu(x1, y1), ssd(x1, y1), vd(x1, y1), ram(x1, y1)
	{
		cpu.Input();
		cpu.Print();

		ssd.Input();
		ssd.Print();

		vd.Input();
		vd.Print();

		ram.Input();
		ram.Print();
	}
};


int main()
{
	//       ->        cout << "all sum: " << Sum::a_sum << endl;



	/*CPU a("", 0);

	a.Input();
	a.Print();

	SSD b("", 0);

	b.Input();
	b.Print();

	VideoCard c("", 0);

	c.Input();
	c.Print();

	RAM d("", 0);

	d.Input();
	d.Print();
	*/


}