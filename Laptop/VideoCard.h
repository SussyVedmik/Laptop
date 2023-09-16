#pragma once
class VideoCard
{
private:
	char* name;
	char* model;
	int power;
	int year;
	double price;
public:
	VideoCard();
	VideoCard(const char* n, const char* m, int p, int y, double pr3);
	VideoCard(const VideoCard& obj3);
	void Print();
	~VideoCard();

	char* GetName() const;
	char* GetModel() const;
	int GetPower() const;
	int GetYear() const;
	double GetPrice() const;
	void SetName(char* n);
	void SetModel(char* m);
	void SetPower(int p);
	void SetYear(int y);
	void SetPrice(double pr3);
};
