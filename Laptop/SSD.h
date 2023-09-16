#pragma once
class SSD
{
private:
	char* name;
	char* speed;
	double price;
public:
	SSD();
	SSD(const char* n, const char* s, double pr2);
	SSD(const SSD& obj2);
	void Print();
	~SSD();

	char* GetName() const;
	char* GetSpeed() const;
	double GetPrice() const;
	void SetName(char* n);
	void SetSpeed(char* s);
	void SetPrice(double pr2);
};