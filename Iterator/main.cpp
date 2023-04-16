#include "product.h"
#include "list.h"

int main() {
    ProductList productList;
    productList.addProduct(new Product("P1", 10, "D1"));
    productList.addProduct(new Product("P2", 20, "D2"));
    productList.addProduct(new Product("P3", 30, "D3"));

    ProductList::Iterator* iterator = productList.createIterator();
    for (iterator->first(); !iterator->isDone(); iterator->next()) {
        Product* product = iterator->currentItem();
        std::cout << "Name: " << product -> getName() << std::endl;
        std::cout << "Price: " << product -> getPrice() << std::endl;
        std::cout << "Description: " << product -> getDescription() << std::endl;
        std::cout << std::endl;
    }

    delete iterator;
    std::vector<Product*> productListVec = productList.getProductList();
    for (std::vector<Product*>::iterator it = productListVec.begin(); it != productListVec.end(); ++it) {
        delete (*it);
    }
    return 0;
}