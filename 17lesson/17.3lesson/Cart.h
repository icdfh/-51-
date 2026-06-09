#pragma once
#include <string>
#include <vector>
#include "Product.h"



class Cart{
private:
   vector<Product> products;

public:
    void addProduct(Product product);
    void showProducts();
    double getTotalPrice();
};