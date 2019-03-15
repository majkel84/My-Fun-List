#include "Anime.hpp"

Anime::Anime(const std::string & title,
            const unsigned int & year,
            const Genere & genere,
            const std::string & director,
            const std::string & mainCharacter,
            const std::string & studio,
            const unsigned int & noEpisodes)
    : Movie(title, year, genere, director, mainCharacter),
    studio_(studio),
    noEpisodes_(noEpisodes)
{}

std::string Anime::getStudio() const
{
    return studio_;
}

std::string Anime::getInfo() const
{
    auto ss = std::stringstream{};
    ss << std::left << std::setw(17) << Item::getTitle() << " "
       << std::left << std::setw(13) << Item::getYear() << " "
       << std::left << std::setw(13) << convMap(Item::getGenere()) << " "
       << std::left << std::setw(13) << Movie::getDirector() << " "
       << std::left << std::setw(13) << Movie::getMainCharacter() << " "
       << std::left << std::setw(13) << studio_ << " "
       << std::left << std::setw(13) << noEpisodes_ << "\n";
    return ss.str();
}
