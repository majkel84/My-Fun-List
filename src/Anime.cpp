#include "Anime.hpp"

Anime::Anime(const std::string & title,
            const unsigned int & year,
            const Genere & genere,
            const std::string & director,
            const std::string & mainCharacter,
            const std::string & studio,
            const std::vector<int> & noEpisodes)
    : Movie(title, year, genere, director, mainCharacter),
    studio_(studio),
    noEpisodes_(noEpisodes)
{}

std::string Anime::getStudio() const
{
    return studio_;
}

std::vector<int> Anime::getNoEpisodes() const
{
    return noEpisodes_;
}

std::string Movie::getInfo() const {return 0;}
