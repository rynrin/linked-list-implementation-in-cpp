#include "linked_list.cpp"
#include <gtest/gtest.h>

// Demonstrate function assertions.
TEST(MainTest, IsDigitFunctionTest) {
    // Expect isDigit function to return false when using "112@#@#" argument
    EXPECT_FALSE(data_structures::linked_list::isDigit("112@#@#"));
    EXPECT_TRUE(data_structures::linked_list::isDigit("112"));
}

TEST(LinkedListTest, InsertFunctionTest) {
    data_structures::linked_list::list l;
    l.push_back(2);

    EXPECT_FALSE(l.isEmpty());
}

TEST(LinkedListTest, SearchFunctionTest) {
    data_structures::linked_list::list l;
    l.push_back(2);

    EXPECT_EQ(l.search(2)->val(), 2);
    EXPECT_EQ(l.search(1), nullptr);
}

TEST(LinkedListTest, EraseFunctionTest) {
    data_structures::linked_list::list l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.erase(2);

    EXPECT_EQ(l.search(2), nullptr);
}