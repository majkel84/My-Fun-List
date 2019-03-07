#include "DataBase.hpp"
#include <gtest/gtest.h>

struct TestItems : public ::testing::Test
{
    DataBase db;
};

/*TEST_F(TestItems, checkPrintingDatabase)
{
    db.addBook("Achaja", 2000, Genere::fantasy, "Ziemianski Andrzej", "Publisher");

    ASSERT_EQ(db.printDataBase();, "Ziemianski Andrzej");
}*/
