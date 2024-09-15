#include "Laptop.h"
#include <iostream>

using namespace std;

int main() 
{
    Laptop myLaptop("Dell XPS 13", 1200, "Intel Core i7-1165G7", 350);
    myLaptop.Output();

    return 0;
}
