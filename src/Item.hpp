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
        Genere getGenere() const;
        virtual std::string getInfo() const;
        virtual std::string getAuthor() const;
        virtual std::string getPublisher() const;
        friend std::ostream& operator<<(std::ostream& os, Item& item);
        friend std::ostream& operator<<(std::ostream& os, Item* item);

        virtual ~Item();

    private:
        std::string title_;
        unsigned short year_;
        Genere genere_;
};
