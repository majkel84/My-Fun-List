#pragma once
#include <string>
#include <vector>
#include <memory>
#include <algorithm>
#include <cctype>
#include <iterator>
#include "Item.hpp"
#include "Book.hpp"
#include "Movie.hpp"
#include "Anime.hpp"

using itemPtr = std::shared_ptr<Item>;
using itemIter = std::vector<std::shared_ptr<Item>>::iterator;

class DataBase
{
public:
    void addItem(itemPtr item);

    bool addBook(const std::string & title,
                 const unsigned int & year,
                 const Genere &genere,
                 const std::string & author,
                 const std::string & publisher);

    bool addMovie(const std::string & title,
                  const unsigned int & year,
                  const Genere & genere,
                  const std::string & director,
                  const std::string & mainCharacter);

    bool addAnime(const std::string & title,
                  const unsigned int & year,
                  const Genere & genere,
                  const std::string & director,
                  const std::string & mainCharacter,
                  const std::string & studio,
                  const unsigned int & noEpisodes);

    void printDataBase() const;
    void sortByTitle();
    void sortByYear();
    void sortByAuthor();
    void sortByDirector();
    void sortByStudio();
    itemIter searchByTitle(const std::string& title);
    itemIter searchByYear(const unsigned int& year);
    itemIter searchByAuthor(const std::string& author);
    itemIter searchByPublisher(const std::string& publisher);
    itemIter searchByDirector(const std::string& director);
    itemIter searchByStudio(const std::string& studio);
    //bool modifyNoEpisodes(const std::string & title, const std::vector<int> & newNoEpisodes);

private:
    std::vector<itemPtr> data_ {};
};
