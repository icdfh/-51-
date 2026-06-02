#include "Product.h"
#include <iostream>
using namespace std;

Product::Product(string title, double price){
    this->title = title;
    this->price = price;
  
}

void Product::printInfo(){
    cout<<"Название: " << title << endl;
    cout<<"Цена: " << price << endl;
}
string Product::getTitle(){
    return title;
}
double Product::getPrice(){
    return price;
}
