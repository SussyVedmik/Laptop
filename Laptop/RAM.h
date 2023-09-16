#pragma once
class RAM
{
private:
	char* name;
	char* type;
	char* speed;
	double price;
public:
	RAM();
	RAM(const char* n, const char* t, const char* s, double pr4);
	RAM(const RAM& obj4);
	void Print();
	~RAM();

	char* GetName() const;
	char* GetType() const;
	char* GetSpeed() const;
	double GetPrice() const;
	void SetName(char* n);
	void SetType(char* t);
	void SetSpeed(char* s);
	void SetPrice(double pr4);
};