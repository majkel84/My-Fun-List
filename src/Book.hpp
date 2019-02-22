#include <iostream>
#include <string>
#include "Item.hpp"

class Book : public Item
{
    public:
        Book(const std::string & title,
            const unsigned int & year,
            const Genere & genere,
            const std::string & author,
            const std::string & publisher);

        std::string getAuthor() const;
        std::string getPublisher() const;
        std::string getInfo() const;

    private:
        std::string author_;
        std::string publisher_;
};
