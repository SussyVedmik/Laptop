#pragma once
class SSD
{
    char* model;
    double price;

public:

    SSD();
    SSD(const char* m, double pr);
    ~SSD();
    void Input();
    void Print();


    char* GetModel();
    double GetPrice();


    void SetModel(const char* m);
    void SetPrice(double pr);
};

