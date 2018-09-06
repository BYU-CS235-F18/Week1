#include "Fisherman.h"

Fisherman::Fisherman(string name, int amount, string type)
{
  this->name = name; // Use this-> to refer to class members if the parameters have the same name
  this->amount = amount;
  this->type = type;
}

Fisherman::~Fisherman()
{
}

string Fisherman::getName() // Format is <return_type> <class>::<method_signature> { <code> }
{
  return name;
}

int Fisherman::getAmount()
{
  return amount;
}

string Fisherman::getType()
{
  return type;
}
