#if !defined(INCLUDED_H_ITEM)
#define INCLUDED_H_ITEM

struct Item
{
    float price;
    char str[30];
};

float input_price();
void input_price(float *);
void input_price(float &);
namespace useless {
    void input_price(float);
}

Item create_item();
void fill_item_array(Item *, int);

void print_item(const Item &);
void print_item_array(Item *, int);

void price_echange(Item &, Item &);

Item & max(Item *, int);
Item & min(Item *, int);

void trick(Item *, int);
void trick_bis(Item *, int);

#endif // INCLUDED_H_ITEM