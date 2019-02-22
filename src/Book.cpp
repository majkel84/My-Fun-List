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

std::string Book::getInfo() const {return 0;}
