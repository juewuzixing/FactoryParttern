#include "Factory.hpp"
#include "Product.hpp"

#include <iostream>
using namespace std;

int main()
{
    Factory* fac = new ConcreteFactory();
    Product* p = new ConcreteProduct();

    return 0;
}
