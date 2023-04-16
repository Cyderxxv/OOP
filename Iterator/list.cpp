#include <iostream>
#include "list.h"

void ProductList::addProduct(Product* product) {
    productList.push_back(product);
}

void ProductList::removeProduct(Product* product) {
    for (auto it = productList.begin(); it != productList.end(); ++it) {
        if (*it == product) {
            productList.erase(it);
            break;
        }
    }
}

std::vector<Product*> ProductList::getProductList() const {
    return productList;
}

ProductList::Iterator::Iterator(ProductList* productList)
    : productList(productList), current(0) {}

void ProductList::Iterator::first() {
    current = 0;
}

void ProductList::Iterator::next() {
    ++current;
}

bool ProductList::Iterator::isDone() const {
    return current >= productList->productList.size();
}

Product* ProductList::Iterator::currentItem() const {
    if (isDone()) {
        return nullptr;
    }
    return productList->productList[current];
}

ProductList::Iterator* ProductList::createIterator() {
    return new Iterator(this);
}