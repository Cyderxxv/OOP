#include "store.h"
#include <iostream>

void Store::addProduct(Product product) {
    products.push_back(product);
}

void Store::displayProducts() {
    for (int i = 0; i < products.size(); i++) {
        std::cout << "Product name: " << products[i].getName() << std::endl;
        std::cout << "Price: " << products[i].getPrice() << std::endl;
        std::cout << "Description: " << products[i].getDescription() << std::endl;
    }
}