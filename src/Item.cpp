#include "Item.hpp"

Item::Item(const std::string & title,
        const unsigned short & year,
        const Genere & genere):
    title_(title),
    year_(year),
    genere_(genere)
{}

std::string Item::getTitle() const
{
    return title_;
}

unsigned short Item::getYear() const
{
    return year_;
}
