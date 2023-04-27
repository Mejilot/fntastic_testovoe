#include <gtest/gtest.h>
#include "parenthesize.h"

TEST(parenthesize, test1) {
    std::string x = "din";
    Parenthesize(x);
    ASSERT_TRUE(x == "(((");
}

TEST(parenthesize, test2) {
    std::string x = "recede";
    Parenthesize(x);
    ASSERT_TRUE(x == "()()()");
}

TEST(parenthesize, test3) {
    std::string x = "Success";
    Parenthesize(x);
    ASSERT_TRUE(x == ")())())");
}

TEST(parenthesize, test4) {
    std::string x = "(( @";
    Parenthesize(x);
    ASSERT_TRUE(x == "))((");
}

TEST(parenthesize, test_cyrillic_1) {
    std::string x = "абоба";
    Parenthesize(x);
    ASSERT_TRUE(x == "))())");
}

TEST(parenthesize, test_cyrillic_2) {
    std::string x = "сус";
    Parenthesize(x);
    ASSERT_TRUE(x == ")()");
}

TEST(parenthesize, test_cyrillic_3) {
    std::string x = "усус";
    Parenthesize(x);
    ASSERT_TRUE(x == "))))");
}

TEST(parenthesize, test_cyrillic_4) {
    std::string x = "абигус";
    Parenthesize(x); 
    ASSERT_TRUE(x == "((((((");
}
