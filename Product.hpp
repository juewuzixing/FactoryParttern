#ifndef PRODUCT_HPP
#define PRODUCT_HPP


class Product
{
public:
    virtual ~Product() = 0;

protected:
    Product();
};

class ConcreteProduct : public Product
{
public:
    ConcreteProduct();
    ~ConcreteProduct();
};

#endif // PRODUCT_HPP
