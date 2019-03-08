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

bool DataBase::addMovie(const std::string & title,
                        const unsigned int & year,
                        const Genere & genere,
                        const std::string & director,
                        const std::string & mainCharacter)
{
    itemPtr movie = std::make_shared<Movie>(title, year, genere, director, mainCharacter);
    addItem(movie);
    return true;
}

bool DataBase::addAnime(const std::string & title,
              const unsigned int & year,
              const Genere & genere,
              const std::string & director,
              const std::string & mainCharacter,
              const std::string & studio,
              const unsigned int &noEpisodes)
{
    itemPtr anime = std::make_shared<Anime>(title, year, genere, director, mainCharacter, studio, noEpisodes);
    addItem(anime);
    return true;
}

void DataBase::printDataBase() const
{
    if (data_.empty())
        std::cout << "Database empty." << "\n";
    for (const auto & itemPtr : data_)
        std::cout << *itemPtr;
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
