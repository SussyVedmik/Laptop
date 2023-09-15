#include "Sum.h"

#include <iostream>

using namespace std;

double Sum::s_AllSum = 0;

Sum::Sum(double summ)

{
	++s_AllSum;
}

Sum::~Sum()

{
	--s_AllSum;
}

void Sum::Show()
{
	cout << a_sum << endl;
}