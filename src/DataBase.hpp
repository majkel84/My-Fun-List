#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Item.hpp"
#include "Book.hpp"
#include "Movie.hpp"
#include "Anime.hpp"

using itemPtr = std::shared_ptr<Item>;
using itemIter = std::vector<std::shared_ptr<Item>>::iterator;
using bookPtr = std::shared_ptr<Book>;
using moviePtr = std::shared_ptr<Movie>;
using animePtr = std::shared_ptr<Anime>;

class DataBase
{
public:
    void printDataBase() const;
    void sortByTitle() const;
    void sortByYear() const;
    void sortByAuthor() const;
    void sortByDirector() const;
    void sortByStudio() const;
    itemIter searchByTitle() const;
    itemIter searchByYear() const;
    itemIter searchByAuthor() const;
    itemIter searchByDirector() const;
    itemIter searchByStudio() const;
    void addItem(itemPtr item);
    bool modifyNoEpisodes(const std::string & title, const std::vecor<int> & newNoEpisodes);

    bool addBook(const std::string & title,
                 const unsigned int & year,
                 const Genere & genere,
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
                  const std::vector<int> & noEpisodes);

private:
    std::vector<itemPtr> data {};
};
