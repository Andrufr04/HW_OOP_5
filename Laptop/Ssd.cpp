#include "Ssd.h"
#include <iostream>
using namespace std;

Ssd::Ssd() 
{
    model = new char[strlen("No model") + 1];
    strcpy_s(model, strlen("No model") + 1, "No model");
    price = 0;
}

Ssd::Ssd(const char* m, double pr)
{
    model = new char[strlen(m) + 1];
    strcpy_s(model, strlen(m) + 1, m);
    price = pr;
}

const char* Ssd::GetModel() 
{
    return model;
}

double Ssd::GetPrice() 
{
    return price;
}

void Ssd::SetPrice(double pr) 
{
    price = pr;
}

Ssd::~Ssd() 
{
    delete[] model;
}