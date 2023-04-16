#include "product.h"

Product::Product(std::string name, double price, std::string description)
    : name(name), price(price), description(description) {}

std::string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

std::string Product::getDescription() const {
    return description;
}