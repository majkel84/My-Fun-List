#include "Item.hpp"

Item::Item(const std::string & title,
        const unsigned short & year,
        const Genere &genere):
    title_(title),
    year_(year),
    genere_(genere)
{}

Item::~Item() {}

std::string Item::getTitle() const
{
    return title_;
}

unsigned short Item::getYear() const
{
    return year_;
}

Genere Item::getGenere() const
{
    return genere_;
}

std::string Item::getInfo() const {}

std::ostream& operator<<(std::ostream& os, Item& item)
{
    os << item.getInfo();
    return os;
}

std::ostream& operator<<(std::ostream& os, Item* item)
{
    os << item -> getInfo();
    return os;
}

