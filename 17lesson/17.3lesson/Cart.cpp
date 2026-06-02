#include "Cart.h"
#include <iostream>
using namespace std;

void Cart::addProduct(Product product){
    products.push_back(product)
}

void Cart::showProducts(){
    cout<<"Товары в корзине" <<endl;
    for(Product product : products){
        product.printInfo();
        cout<<"-------------------"<<endl;
    }
}
double Cart::getTotalPrice(){
    double total = 0;
    for(Product product : products){
        total += product.getPrice();
    }
    return total;
}