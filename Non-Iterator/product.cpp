#include "Product.h"

Product::Product(std::string name, double price, std::string description) {
    this -> name = name;
    this -> price = price;
    this -> description = description;
}

std::string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

std::string Product::getDescription() const {
    return description;
}