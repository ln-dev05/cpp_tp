#include <iostream>
#include "Item.h"
using namespace std;

int main()
{

    #if 0
    Item bag = {-1., "Bag"};
    cout << bag.str << ":" << bag.price << endl;

    bag.price = input_price();
    cout << bag.str << ":" << bag.price << endl;

    input_price(&(bag.price));
    cout << bag.str << ":" << bag.price << endl;

    input_price(bag.price);
    cout << bag.str << ":" << bag.price << endl;

    useless::input_price(bag.price);
    cout << bag.str << ":" << bag.price << endl;

    bag = create_item();
    cout << bag.str << ":" << bag.price << endl;


    const int nb_in_store = 3;
    Item store[nb_in_store];
    fill_item_array(store, nb_in_store);
    print_item_array(store, nb_in_store);

    print_item(min(store, nb_in_store));

    Item items[3] = {
        {74.9, "Nutella"},
        {199.9, "Milka"},
        {30.9, "Cristaline"}};

    trick(items, 3);
    print_item_array(items, 3);

    cout << "" << endl;

    trick_bis(items, 3);
    print_item_array(items, 3);

    price_echange(create_item(), create_item());

    #endif
    return 0;
}
