#pragma once
class SSD
{
    char* model;
    double price;

public:

    SSD();
    SSD(const char* m, double pr);
    SSD(const SSD& ssd)
    {
        model = new char[strlen(ssd.model) + 1];
        strcpy_s(model, strlen(ssd.model) + 1, ssd.model);
        price = ssd.price;
    }
    ~SSD();
    void Input();
    void Print();


    char* GetModel();
    double GetPrice();


    void SetModel(const char* m);
    void SetPrice(double pr);
};

