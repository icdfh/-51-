#pragma once
#include <string>
using namespace std;

class Product{
private:
   string title;
   double price;

public:
    Product(string title, double price);
    string getTitle();
    double getPrice();
    void printInfo();

};