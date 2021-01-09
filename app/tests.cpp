#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Operation.h"

TEST(OperationTest, MultiplyInt)
{
    Operation<int> obj(5, 7);
    EXPECT_EQ(obj.multiply(), 35);
}
TEST(OperationTest, DivideInt)
{
    Operation<int> obj(5, 7);
    EXPECT_EQ(obj.divide(), 0);
}
TEST(OperationTest, AddString)
{
    Operation<std::string> obj("abc", "cde");
    EXPECT_EQ(obj.add(), "abccde");
}
TEST(OperationTest, DivideDouble)
{
    Operation<double> obj(10, 4);
    EXPECT_NEAR(obj.divide(), 2.5, 1e-5);
}
TEST(OperationTest, SubtractDoble)
{
    Operation<double> obj(10, 2.5);
    EXPECT_DOUBLE_EQ(obj.subtract(), 7.5);
}
TEST(OperationTest, AddDouble)
{
    Operation<double> obj(11.2, -0.4);
    EXPECT_DOUBLE_EQ(obj.add(), 10.8);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
