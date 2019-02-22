#include "Movie.hpp"

Movie::Movie(const std::string & title,
            const unsigned int & year,
            const Genere & genere,
            const std::string & director,
            const std::string & mainCharacter)
    : Item(title, year, genere),
    director_(director),
    mainCharacter_(mainCharacter)
{}

std::string Movie::getDirector() const
{
    return director_;
}

std::string Movie::getMainCharacter() const
{
    return mainCharacter_;
}

std::string Movie::getInfo() const {return 0;}
