#pragma once
#include <iostream>
#include <string>
#include <iomanip>
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
        //char enumToString(Genere ets);

        virtual ~Item();

    protected:
        std::string title_;
        unsigned short year_;
        Genere genere_;
};
