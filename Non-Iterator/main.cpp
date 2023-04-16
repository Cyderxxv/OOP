#include "store.h"

int main() {
    Store store;
    Product product1("P1", 10, "D1");
    Product product2("P2", 15, "D2");
    Product product3("P3", 20, "D3");
    store.addProduct(product1);
    store.addProduct(product2);
    store.addProduct(product3);
    store.displayProducts();
    return 0;
}