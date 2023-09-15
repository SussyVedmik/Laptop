#pragma once
class RAM
{
    char* model;
    double price;

public:

    RAM();
    RAM(const char* m, double pr);
    ~RAM();
    void Input();
    void Print();


    char* GetModel();
    double GetPrice();


    void SetModel(const char* m);
    void SetPrice(double pr);
};

