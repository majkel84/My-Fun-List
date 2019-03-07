#include "DataBase.hpp"
#include <gtest/gtest.h>

struct Items : public ::testing::Test
{
    DataBase db;
};

TEST_F(Items, checkPrintingDatabase)
{

}
