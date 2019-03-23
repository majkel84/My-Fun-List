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
        std::cout << "Database empty" << "\n";
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

itemIter DataBase::searchByTitle(const std::string& title)
{
    auto it = std::find_if(data_.begin(), data_.end(), [&title](itemPtr item){
        return item -> getTitle() == title;
    });
    if (it != data_.end())
        std::cout << *it << "\n";
    else
        std::cout << "Title " << title << " not found" << "\n";
    return it;
}

itemIter DataBase::searchByYear(const unsigned int &year)
{
    auto it = std::find_if(data_.begin(), data_.end(), [&year](itemPtr item){
        return item -> getYear() == year;
    });
    if (it != data_.end())
        std::cout << *it << "\n";
    else
        std::cout << "Year " << year << " not found" << "\n";
    return it;
}

itemIter DataBase::searchByAuthor(const std::string& author)
{
    auto it = std::find_if(data_.begin(), data_.end(), [&author](itemPtr item){
            return item -> getAuthor() == author;
    });
    if (it != data_.end())
        std::cout << *it << "\n";
    else
        std::cout << "Author " << author << " not found" << "\n";
    return it;
}

itemIter DataBase::searchByPublisher(const std::string& publisher)
{
    auto it = std::find_if(data_.begin(), data_.end(), [&publisher](itemPtr item){
            return item -> getPublisher() == publisher;
    });
    if (it != data_.end())
        std::cout << *it << "\n";
    else
        std::cout << "Publisher " << publisher << " not found" << "\n";
    return it;
}

itemIter DataBase::searchByDirector(const std::string& director)
{
    auto it = std::find_if(data_.begin(), data_.end(), [&director](itemPtr item){
            return item -> getDirector() == director;
    });
    if (it != data_.end())
        std::cout << *it << "\n";
    else
        std::cout << "Director " << director << " not found" << "\n";
    return it;
}

itemIter DataBase::searchByStudio(const std::string &studio)
{
    auto it = std::find_if(data_.begin(), data_.end(), [&studio](itemPtr item){
            return item -> getStudio() == studio;
    });
    if (it != data_.end())
        std::cout << *it << "\n";
    else
        std::cout << "Studio " << studio << " not found" << "\n";
    return it;
}

void DataBase::sortByDirector()
{
    std::sort(data_.begin(), data_.end(), [](itemPtr lhs, itemPtr rhs){
         if (lhs -> getDirector() == "0")
             return false;
         if (rhs -> getDirector() == "0")
             return true;
        return lhs -> getDirector() < rhs ->getDirector();
    });
}

void DataBase::sortByAuthor()
{
    std::sort(data_.begin(), data_.end(), [](itemPtr lhs, itemPtr rhs){
         if (lhs -> getAuthor() == "0")
             return false;
         if (rhs -> getAuthor() == "0")
             return true;
        return lhs -> getAuthor() < rhs ->getAuthor();
    });
}
