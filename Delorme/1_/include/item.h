#ifndef ITEM_H
#define ITEM_H

struct item {
    char label[30];
    float price;
};

float readPrice();

void readPrice(float *);

namespace useless {
    void readPrice(float);
}

void readPrice(float &);

item readItem();

void printItem(const item & i);

void fillItemTable(item table[], int taille);

void printItemTable(const item table [], const int taille);

void swapPrices(item & item1, item & item2);

item & cheapest(item table [], int taille);

item & mostExpansive(item table [], int taille);

#endif