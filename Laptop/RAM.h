#pragma once
class RAM
{
    char* model;
    double price;

public:

    RAM();
    RAM(const char* m, double pr);
    RAM(const RAM& ram)
    {
        model = new char[strlen(ram.model) + 1];
        strcpy_s(model, strlen(ram.model) + 1, ram.model);
        price = ram.price;
    }
    ~RAM();
    void Input();
    void Print();


    char* GetModel();
    double GetPrice();


    void SetModel(const char* m);
    void SetPrice(double pr);
};

