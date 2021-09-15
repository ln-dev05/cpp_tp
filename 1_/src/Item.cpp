#include "Item.h"

#include <iostream>

using namespace std;

float input_price() {
    float price;

    do {
        cout << "Give a positive price :" << endl;
        cin >> price;
    } while (price < 0);

    return price;
}

void input_price(float *price) {
    do {
        cout << "Give a positive price :" << endl;
        cin >> *price;
    } while (*price < 0);
}

void input_price(float &price) {
    do {
        cout << "Give a positive price :" << endl;
        cin >> price;
    } while (price < 0);
}
namespace useless {
void input_price(float price) {
    do {
        cout << "Give a positive price :" << endl;
        cin >> price;
    } while (price < 0);
}
}  // namespace useless

Item create_item() {
    Item new_item;

    cout << "Please give a name to the new item" << endl;
    cin >> new_item.str;

    input_price(new_item.price);

    return new_item;
}

void fill_item_array(Item *array, int array_size) {
    for (int i = 0; i < array_size; i++) {
        array[i] = create_item();
    }
}

void print_item(const Item & item)
{
    cout << item.str << ":" << item.price << endl;
}

void print_item_array(Item * store, int size)
{
    for (int i = 0; i < size; i++) {
        print_item(store[i]);
    }
}

void price_echange(Item & A, Item & B)
{
    float tmp;
    
    tmp = A.price;
    A.price = B.price;
    B.price = tmp;
}

Item &max(Item *array, int size)
{
    int price_max = -1;
    int index_max = 0;

    for (int i = 0; i < size; i++) {
        if (array[i].price > price_max) {
            price_max = array[i].price;
            index_max = i;
        }
    }
    return array[index_max];
}

Item &min(Item *array, int size)
{
    int price_min = INT32_MAX;
    int index_min = 0;

    for (int i = 0; i < size; i++) {
        if (array[i].price < price_min) {
            price_min = array[i].price;
            index_min = i;
        }
    }
    return array[index_min];
}

void trick(Item * store, int size)
{
    price_echange(min(store, size), max(store, size));
}

void trick_bis(Item * store, int size)
{
    Item & item_min = min(store, size);
    Item & item_max = max(store, size);
    price_echange(item_min, item_max);
}