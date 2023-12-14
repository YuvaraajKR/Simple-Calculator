#include "gtest/gtest.h"

#include "calculator/addition/addition.h"
#include "calculator/subraction/subraction.h"
#include "calculator/division/division.h"
#include "calculator/multiplication/multiplication.h"

TEST(additionTest, returnAddition){

    float actual = addition(1,2);
    float expected = 3;
    EXPECT_EQ(expected,actual);
}

TEST(subractionTest, returnSubraction){

    float actual = subraction(1,2);
    float expected = -1;
    EXPECT_EQ(expected,actual);
}

TEST(multiplicationTest, returnMultiplication){

    float actual = multiplication(1,2);
    float expected = 2;
    EXPECT_EQ(expected,actual);
}

TEST(divisionTest, returnDivision){

    float actual = division(1,2);
    float expected = 0.5;
    EXPECT_EQ(expected,actual);
}


