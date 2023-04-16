#pragma once
#include <iostream>
#include <string>

class Product {
    private:
        std::string name;
        double price;
        std::string description;
    public:
        Product(std::string name, double price, std::string description);
        std::string getName() const;
        double getPrice() const;
        std::string getDescription() const;
};