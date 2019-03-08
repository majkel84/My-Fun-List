#pragma once
#include <vector>
#include "Movie.hpp"

class Anime : public Movie
{
public:
    Anime(const std::string & title,
          const unsigned int & year,
          const Genere & genere,
          const std::string & director,
          const std::string & mainCharacter,
          const std::string & studio,
          const unsigned int &noEpisodes);

    std::string getInfo() const;

private:
    std::string studio_;
    unsigned int noEpisodes_;
};
