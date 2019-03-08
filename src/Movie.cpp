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

std::string Movie::getInfo() const
{
    auto ss = std::stringstream{};
    ss << std::left << std::setw(13) << title_ << " "
       << std::left << std::setw(13) << year_ << " "
       << std::left << std::setw(13) << convMap(genere_) << " "
       << std::left << std::setw(13) << director_ << " "
       << std::left << std::setw(13) << mainCharacter_ << "\n";
    return ss.str();
}
