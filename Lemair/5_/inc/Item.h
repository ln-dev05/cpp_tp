/** -*- mode: c++ ; c-basic-offset: 2 -*-
 * @file   Item.h
 * @author Sebastien Fourey
 */
#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>

struct Item {
  unsigned int reference;
  std::string name;
  float price;
};

std::istream & operator>>(std::istream & in, Item & item);

std::ostream & operator<<(std::ostream & out, const Item & item);


#endif
