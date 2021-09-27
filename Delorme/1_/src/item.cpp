#include "item.h"
#include "iostream"

float readPrice() {
    float price = 0.;

    while (price <= 0) {
        std::cout << "Enter the price of the Article: " << std::endl;
        std::cin >> price;
    }
    return price;
}

void readPrice(float * price) {
    do {
        std::cout << "Enter the price of the Article: " << std::endl;
        std::cin >> *price;
    }while ((*price) <= 0.);
}

namespace useless {
    
    void readPrice(float price) {
        do {
            std::cout << "Enter the price of the Article: " << std::endl;
            std::cin >> price;
        } while (price <= 0.);
    }
}

void readPrice(float & price) {
    do  {
        std::cout << "Enter the price of the Article: " << std::endl;
        std::cin >> price;
    } while (price <= 0.);
}

item readItem() {
    item currentItem;

    std::cout << "Enter the name of the Article: " << std::endl;
    std::cin >> currentItem.label;
    readPrice(currentItem.price);

    return currentItem;
}

void fillItemTable(item table[], int taille) {
    for (int i = 0; i < taille; i++) {
        table[i] = readItem();
        printItem(table[i]);
    }
}

void printItem(const item & itemToPrint) {
    std::cout << itemToPrint.label << + " : ";
    int delta = 30 - (std::string (itemToPrint.label)).size();
    char * deltaChar = new char[delta];

    for (int i = 0; i < delta; i++) {
        deltaChar[i] = ' ';
    }

    std::cout << deltaChar << itemToPrint.price << " €" << std::endl;
    delete[] deltaChar;
}

void printItemTable(const item table [], const int taille) {
    for (int i = 0; i < taille; i++) {
        std::cout << i+1 << ": ";
        printItem(table[i]);
    }
}

void swapPrices(item & item1, item & item2) {
    float swap;
    swap = item1.price;
    item1.price = item2.price;
    item2.price = swap;
}

item & cheapest(item table [], int taille) {
    float min = -1;
    int ind = -1;

    for (int i = 0; i < taille; i++) {
        if (table[i].price < min || min == -1 ) {
            min = table[i].price;
            ind = i;
        }
    }

    return table[ind];
}

item & mostExpansive(item table [], int taille) {
    float max = 0;
    int ind = -1;

    for (int i = 0; i < taille; i++) {
        if (table[i].price > max) {
            max = table[i].price;
            ind = i;
        }
    }

    return table[ind];
}

