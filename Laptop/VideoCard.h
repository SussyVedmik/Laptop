#pragma once
class VideoCard
{
    char* model;
    double price;

public:

    VideoCard();
    VideoCard(const char* m, double pr);
    VideoCard(const VideoCard& vd)
    {
        model = new char[strlen(vd.model) + 1];
        strcpy_s(model, strlen(vd.model) + 1, vd.model);
        price = vd.price;
    }
    ~VideoCard();
    void Input();
    void Print();


    char* GetModel();
    double GetPrice();


    void SetModel(const char* m);
    void SetPrice(double pr);
};

