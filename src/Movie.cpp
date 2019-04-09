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
       << std::left << std::setw(6) << Item::getYear() << " "
       << std::left << std::setw(10) << convMap(Item::getGenere()) << " "
       << std::left << std::setw(17) << "----" << " "
       << std::left << std::setw(13) << "----" << " "
       << std::left << std::setw(17) << director_ << " "
       << std::left << std::setw(17) << mainCharacter_ << " "
       << std::left << std::setw(10) << "----" << " "
       << std::left << std::setw(2) << "----" << '\n';
    return ss.str();
}
