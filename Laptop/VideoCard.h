#pragma once
class VideoCard
{
    char* model;
    double price;

public:

    VideoCard();
    VideoCard(const char* m, double pr);
    ~VideoCard();
    void Input();
    void Print();


    char* GetModel();
    double GetPrice();


    void SetModel(const char* m);
    void SetPrice(double pr);
};

