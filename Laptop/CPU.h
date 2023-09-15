#pragma once
class CPU
{
    char* model;
    double price;

public: 

    CPU();
    CPU(const char* m, double pr);
    ~CPU();
    void Input();
    void Print();

    
    char* GetModel();
    double GetPrice();

    
    void SetModel(const char* m);
    void SetPrice(double pr);
};

