#if !defined(INCLUDED_H_ITEM)
#define INCLUDED_H_ITEM

struct Item
{
    float price;
    char str[30];
};

float input_price();
void input_price(float * price);
void input_price(float & price);
namespace useless {
    void input_price(float price);
}

Item create_item();
void fill_item_array(Item * array, int size);

void print_item(const Item & item);
void print_item_array(Item * array, int size);

void price_echange(Item & A, Item & B);

Item & max(Item * array, int size);
Item & min(Item * array, int size);

void trick(Item * store, int size);
void trick_bis(Item * store, int size);

#endif // INCLUDED_H_ITEM