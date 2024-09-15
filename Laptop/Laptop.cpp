#include "Laptop.h"
#include <iostream>

using namespace std;

Laptop::Laptop(const char* n, double pr, const char* mcpu, double prcpu) : cpu(mcpu, prcpu)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    price = pr;

    ram = new Ram("Kingston HyperX Fury", 100);
    gpu = new Gpu("NVIDIA GeForce GTX 1650", 300);
    ssd = new Ssd("Samsung 970 EVO Plus", 200);
}

double Laptop::GetPrice()
{
    return price + cpu.GetPrice() + ram->GetPrice() + ssd->GetPrice() + gpu->GetPrice();
}

void Laptop::Output()
{
    cout << "MODEL: " << name << endl
        << "Cpu: \t" << cpu.GetModel() << endl
        << "Gpu: \t" << gpu->GetModel() << endl
        << "Ram: \t" << ram->GetModel() << endl
        << "Ssd: \t" << ssd->GetModel() << endl
        << "price = " << GetPrice() << " $\n";
}

Laptop::~Laptop()
{
    delete[] name;
    delete ram;
    delete ssd;
    delete gpu;
}
