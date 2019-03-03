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

std::string Item::getInfo() const {
    auto ss = std::stringstream {};
    ss << std::left << std::setw(13) << title_ << " "
       << std::left << std::setw(13) << year_ << " "
       << std::left << std::setw(13) << convMap(genere_) << "\n";
    return ss.str();
}

std::ostream& operator<<(std::ostream os, Item * item)
{
    os << item ->getInfo();
    return os;
}
