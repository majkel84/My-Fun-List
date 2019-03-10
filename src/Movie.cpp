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

std::string Movie::getInfo() const
{
    auto ss = std::stringstream{};
    ss << std::left << std::setw(17) << Item::getTitle() << " "
       << std::left << std::setw(13) << Item::getYear() << " "
       << std::left << std::setw(13) << convMap(Item::getGenere()) << " "
       << std::left << std::setw(13) << director_ << " "
       << std::left << std::setw(13) << mainCharacter_ << "\n";
    return ss.str();
}
