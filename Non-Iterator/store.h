#pragma once
#include <vector>
#include "product.h"

class Store {
    public:
        void addProduct(Product product);
        void displayProducts();
    private:
        std::vector<Product> products;
};