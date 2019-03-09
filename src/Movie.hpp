#pragma once
#include <iostream>
#include <string>
#include "Item.hpp"

class Movie : public Item
{
    public:
        Movie(const std::string & title,
            const unsigned int & year,
            const Genere & genere,
            const std::string & director,
            const std::string & mainCharacter);

        std::string getDirector() const;
        std::string getMainCharacter() const;
        std::string getInfo() const;

    private:
        std::string director_;
        std::string mainCharacter_;
};
