#ifndef FACTORY_HPP
#define FACTORY_HPP

class Product;

class Factory
{
public:
    virtual ~Factory() = 0;
    virtual Product* CreateProduct() = 0;

protected:
    Factory();
};

class ConcreteFactory : public Factory
{
public:
    ConcreteFactory();
    ~ConcreteFactory();

    Product* CreateProduct();
};

#endif // FACTORY_HPP
