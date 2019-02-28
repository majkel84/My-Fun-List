#include<DataBase.hpp>

void DataBase::printDataBase() const
{
    if (data_.empty())
        std::cout << "Database empty." << "\n";
    for (const auto & itemPtr : data_)
        std::cout << itemPtr;
    std::cout << "\n";
}

/*void DataBase::sortByTitle() const
{
    if (data_.empty())
        std::cout << "Database empty." << "\n";
    std::sort(data_.begin(), data_.end(), [](itemPtr lhs, itemPtr rhs) {
        return lhs -> getTitle() < rhs -> getTitle();
    });
}*/

/*void DataBase::sortByYear() const
{
    if (data_.empty())
        std::cout << "Database empty." << "\n";
    std::sort(data_.begin(), data_.end(), [](itemPtr lhs, itemPtr rhs) {
        return lhs -> getYear() < rhs -> getYear();
    });
}*/