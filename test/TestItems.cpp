#include "DataBase.hpp"
#include <gtest/gtest.h>

struct TestItems : public ::testing::Test
{
    DataBase db;
};

TEST_F(TestItems, checkAddBookNoThrows)
{
    ASSERT_NO_THROW(db.addBook("Achaja", 2000, Genere::fantasy, "Ziemianski Andrzej", "Publisher"););
}

TEST_F(TestItems, checkAddMovieNoThrows)
{
    ASSERT_NO_THROW(db.addMovie("Alien", 1979, Genere::sf, "Ridley Scott", "Sigourney Weaver"));
}

TEST_F(TestItems, checkAddAnimeNoThrows)
{
    ASSERT_NO_THROW(db.addAnime("My Fiend Totoro", 1988, Genere::anime, "Hayao Miyazaki", "Totoro", "Ghibli", 1));
}

TEST_F(TestItems, checkSaveToFile)
{
    db.addAnime("My Fiend Totoro", 1988, Genere::anime, "Hayao Miyazaki", "Totoro", "Ghibli", 1);
    ASSERT_TRUE(db.saveToFile());
}

TEST_F(TestItems, checkLoadFile)
{
    ASSERT_TRUE(db.loadFromFile());
}
