#include "DataBase.hpp"

int main()
{
    DataBase db;
    db.addBook("Achaja", 2000, Genere::fantasy, "Ziemianski Andrzej", "Publisher");
    db.addBook("Achaja2", 2001, Genere::fantasy, "Ziemianski Andrzej", "Publisher");
    db.addMovie("Alien", 1979, Genere::sf, "Ridley Scott", "Sigourney Weaver");
    db.addMovie("Alien", 1979, Genere::sf, "Ridley Scott", "Sigourney Weaver");
    db.addAnime("My Fiend Totoro", 1988, Genere::anime, "Hayao Miyazaki", "Totoro", "Ghibli", 1);
    db.printDataBase();
    db.sortByTitle();
    db.printDataBase();
    db.sortByYear();
    db.printDataBase();

    return 0;
}
