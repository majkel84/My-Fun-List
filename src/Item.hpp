#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <memory>
#include <sstream>
#include "Genere.hpp"

class Item
{
    public:
        Item(const std::string & title,
            const unsigned short & year,
            const Genere &genere);

        unsigned short getYear() const;
        std::string getTitle() const;
        virtual std::string getInfo() const;
        friend std::ostream& operator<<(std::ostream& os, Item& item);
        //char enumToString(Genere ets);

        virtual ~Item();

    protected:
        std::string title_;
        unsigned short year_;
        Genere genere_;
};
