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

std::string Book::getAuthor() const
{
    return author_;
}
std::string Book::getPublisher() const
{
    return publisher_;
}

std::string Book::getInfo() const
{
    auto ss = std::stringstream{};
    ss << std::left << std::setw(17) << Item::getTitle() << " "
       << std::left << std::setw(6) << Item::getYear() << " "
       << std::left << std::setw(10) << convMap(Item::getGenere()) << " "
       << std::left << std::setw(17) << author_ << " "
       << std::left << std::setw(13) << publisher_ << " "
       << std::left << std::setw(17) << "----" << " "
       << std::left << std::setw(17) << "----" << " "
       << std::left << std::setw(10) << "----" << " "
       << std::left << std::setw(3) << "----" << '\n';
    return ss.str();
}
