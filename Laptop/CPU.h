#pragma once
class CPU
{
private:
	char* name;
	char* speed;
	int year;
	double price;
public:
	CPU();
	CPU(const char* n, const char* s, int y, double pr1);
	CPU(const CPU& obj);
	void Print();
	~CPU();

	char* GetName() const;
	char* GetSpeed() const;
	int GetYear() const;
	double GetPrice() const;
	void SetName(char* n);
	void SetSpeed(char* s);
	void SetYear(int y);
	void SetPrice(double pr1);
};
