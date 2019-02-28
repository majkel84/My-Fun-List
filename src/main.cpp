//#include <iostream>
#include "DataBase.hpp"

int main()
{
    DataBase db;
    db.addBook("Achaja", 2000, Genere::fantasy, "Ziemianski Andrzej", "Publisher");
    db.addBook("Achaja2", 2001, Genere::fantasy, "Ziemianski Andrzej", "Publisher");
    db.printDataBase();

    return 0;
}
