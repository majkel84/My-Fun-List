#include "Book.hpp"

Book::Book(const std::string & title,
            const unsigned int & year,
            const Genere & genere,
            const std::string & author,
            const std::string & publisher)
    : Item(title, year, genere),
    author_(author),
    publisher_(publisher)
{}

std::string Book::getInfo() const
{
    auto ss = std::stringstream{};
    ss << std::left << std::setw(13) << title_ << " "
       << std::left << std::setw(13) << year_ << " "
       << std::left << std::setw(13) << convMap(genere_) << " "
       << std::left << std::setw(13) << author_ << " "
       << std::left << std::setw(13) << publisher_ << "\n";
    return ss.str();
}
