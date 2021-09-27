#include "iostream"
#include "item.h"

int main() {

    float priceAsked = -1.0;
    float & refPriceAsked = priceAsked;

    if (false) {
        priceAsked = readPrice();
        std::cout << "prix: " << priceAsked << std::endl;
        priceAsked = -1.0;

        readPrice(&priceAsked);
        std::cout << "prix: " << priceAsked << std::endl;
        priceAsked = -1.0;

        useless::readPrice(priceAsked);
        std::cout << "prix: " << priceAsked << std::endl;
        priceAsked = -1.0;

        readPrice(refPriceAsked);
        std::cout << "prix: " << priceAsked << std::endl;
        priceAsked = -1.0;    

        item firstItem = readItem();
        std::cout << firstItem.label << + " : " << firstItem.price << " €" << std::endl;

        item table[5] = {
            {"Le c++ pour les nul", 25.25},
            {"Reprenez le controle du Mac", 100},
            {"Python, le langage du siecle", 15.99},
            {"Le journal du codeur", 2.5},
            {"Petit manifeste sur l'AGILITE", 30}
        };
        // or 
        // fillItemTable(table, 5);
        // but not both

        std::cout << std::endl;
        printItemTable(table, 5);

        std::cout << std::endl;
        std::cout << "cheapest object in the table :" << std::endl; 
        printItem(cheapest(table, 5));

        std::cout << std::endl;
        std::cout << "most expansive object in the table :" << std::endl; 
        printItem(mostExpansive(table, 5));

        std::cout << std::endl;
        swapPrices(cheapest(table, 5), mostExpansive(table, 5));
        printItemTable(table, 5);

        std::cout << std::endl;
        item & min = cheapest(table, 5);
        item & max = mostExpansive(table, 5);
        swapPrices(min, max);
        printItemTable(table, 5);
    }

    //swapPrices(readItem(), readItem());
    //ne compile pas

    exit(0);

}