#include "DataBase.hpp"

int main()
{
    DataBase db;
    db.addMovie("Infiltration", 2015, Genere::thriller, "Martin Scorsese", "Leonardo di Caprio");
    db.addBook("Achaja", 2000, Genere::fantasy, "Ziemianski Andrzej", "Publisher");
    db.addBook("Achaja2", 2001, Genere::fantasy, "Ziemianski Andrzej", "Publisher");
    db.addMovie("Alien", 1979, Genere::sf, "Ridley Scott", "Sigourney Weaver");
    db.addAnime("My Fiend Totoro", 1988, Genere::anime, "Hayao Miyazaki", "Totoro", "Ghibli", 1);
    db.printDataBase();
    db.sortByTitle();
    db.printDataBase();
    db.sortByYear();
    db.printDataBase();
    db.searchByTitle("Alien");
    db.searchByYear(1988);
    db.searchByAuthor("Ziemianski Andrzej");
    db.searchByPublisher("Publisher");
    db.searchByDirector("Ridley Scott");
    db.searchByStudio("Ghibli");
    db.sortByDirector();
    db.printDataBase();
    db.sortByAuthor();
    db.printDataBase();
    db.sortByStudio();
    db.modifyNoEpisodes("My Fiend Totoro", 2);
    db.printDataBase();
    db.saveToFile();

    return 0;
}
