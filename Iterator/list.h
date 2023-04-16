#ifndef PRODUCT_LIST_H
#define PRODUCT_LIST_H

#include <vector>
#include "Product.h"

class ProductList {
    private:
        std::vector<Product*> productList;

    public:
        void addProduct(Product* product);
        void removeProduct(Product* product);
        std::vector<Product*> getProductList() const;

        class Iterator {
            private:
                ProductList* productList;
                int current;
            public:
                Iterator(ProductList* productList);

                void first();
                void next();
                bool isDone() const;
                Product* currentItem() const;
        };

        Iterator* createIterator();
};

#endif