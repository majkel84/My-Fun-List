#include<DataBase.hpp>

void DataBase::addItem(itemPtr item)
{
    data_.emplace_back(item);
}

bool DataBase::addBook(const std::string & title,
                       const unsigned int & year,
                       const Genere & genere,
                       const std::string & author,
                       const std::string & publisher)
{
    itemPtr book = std::make_shared<Book>(title, year, genere, author, publisher);
    addItem(book);
    return true;
}

void DataBase::printDataBase() const
{
    if (data_.empty())
        std::cout << "Database empty." << "\n";
    for (const auto & itemPtr : data_)
        std::cout << itemPtr;
    std::cout << "\n";
}

void DataBase::sortByTitle()
{
    if (data_.empty())
        std::cout << "Database empty." << "\n";
    std::sort(data_.begin(), data_.end(), [](const itemPtr lhs, const itemPtr rhs) {
        return lhs -> getTitle() < rhs -> getTitle();
    });
}

void DataBase::sortByYear()
{
    if (data_.empty())
        std::cout << "Database empty." << "\n";
    std::sort(data_.begin(), data_.end(), [](itemPtr lhs, itemPtr rhs) {
        return lhs -> getYear() < rhs -> getYear();
    });
}
