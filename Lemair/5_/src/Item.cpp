/** -*- mode: c++ ; c-basic-offset: 2 -*-
 * @file   Item.cpp
 * @author Sebastien Fourey
 */
#include "Item.h"
using namespace std;

istream & operator>>(istream & in, Item & item)
{
  in >> item.reference;
  in >> item.name;
  in >> item.price;
  return in;
}

std::ostream & operator<<(std::ostream & out, const Item & item)
{
  out << item.reference << " " << item.name << " " << item.price;
  return out;
}
