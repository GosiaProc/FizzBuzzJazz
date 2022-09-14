#include "pch.h"
#include "../FBJStaticLib1/FizzBuzz.h"
#include <tuple>

class FizzBuzzTest
	: public testing::TestWithParam<std::tuple<int, std::string>> {
};

TEST_P(FizzBuzzTest, FizzBuzzClassTest1) {

	std::tuple<int, std::string> myCase = GetParam();

	int number = std::get<0>(myCase);
	std::string output = std::get<1>(myCase);

	std::cout << "param = " << number << "expe value " << output << std::endl;
	std::string s = FizzBuzz(number);
	ASSERT_EQ(s, output);
}
INSTANTIATE_TEST_CASE_P(FizzBuzzClassTest, FizzBuzzTest, testing::Values(
	std::make_tuple(840, "FizzBuzzJazz"),
	std::make_tuple(105, "FizzBuzzJazz"),
	std::make_tuple(140, "BuzzJazz"),
	std::make_tuple(35, "BuzzJazz"),
	std::make_tuple(42, "FizzJazz"),
	std::make_tuple(21, "FizzJazz"),
	std::make_tuple(60, "FizzBuzz"),
	std::make_tuple(15, "FizzBuzz"),
	std::make_tuple(216231, "Fizz"),
	std::make_tuple(14, "Jazz"),
	std::make_tuple(7, "Jazz"),
	std::make_tuple(21625, "Buzz"),
	std::make_tuple(21624, "Fizz"),
	std::make_tuple(10, "Buzz"),
	std::make_tuple(6, "Fizz"),
	std::make_tuple(5, "Buzz"),
	std::make_tuple(3, "Fizz"),
	std::make_tuple(2, "2"),
	std::make_tuple(21629, "21629"),
	std::make_tuple(1, "1")));

void checkFizzBuzz(int value, std::string expect) {
	std::string result = FizzBuzz(value);
	EXPECT_EQ(expect, result);
}
TEST(FizzBuzzJazzTest, input1result1) {
	checkFizzBuzz(1, "1");
}
TEST(FizzBuzzJazzTest, input2result2) {
	checkFizzBuzz(2, "2");
}
TEST(FizzBuzzJazzTest, input21629result21629) {
	checkFizzBuzz(21629, "21629");
}
TEST(FizzBuzzJazzTest, input3resultFizz) {
	checkFizzBuzz(3, "Fizz");
}

TEST(FizzBuzzJazzTest, input6resultFizz) {
	checkFizzBuzz(6, "Fizz");
}
TEST(FizzBuzzJazzTest, input21624resultFizz) {
	checkFizzBuzz(21624, "Fizz");
}
TEST(FizzBuzzJazzTest, input5result5) {
	checkFizzBuzz(5, "Buzz");
}
TEST(FizzBuzzJazzTest, divisible5resultBuzz) {
	checkFizzBuzz(10, "Buzz");
}
TEST(FizzBuzzJazzTest, divisible21625resultBuzz) {
	checkFizzBuzz(21625, "Buzz");
}

TEST(FizzBuzzJazzTest, input7resultJazz) {
	checkFizzBuzz(7, "Jazz");
}
TEST(FizzBuzzJazzTest, divisible14resultJazz) {
	checkFizzBuzz(14, "Jazz");
}
TEST(FizzBuzzJazzTest, divisible216231resultFizz) {
	checkFizzBuzz(216231, "Fizz");
}
TEST(FizzBuzzJazzTest, divisible15resultFizzBuzz) {
	checkFizzBuzz(15, "FizzBuzz");
}
TEST(FizzBuzzJazzTest, divisible60resultFizzBuzz) {
	checkFizzBuzz(60, "FizzBuzz");
}
TEST(FizzBuzzJazzTest, divisible21resultFizzJazz) {
	checkFizzBuzz(21, "FizzJazz");
}
TEST(FizzBuzzJazzTest, divisible42resultFizzJazz) {
	checkFizzBuzz(42, "FizzJazz");
}
TEST(FizzBuzzJazzTest, divisible35resultBuzzJazz) {
	checkFizzBuzz(35, "BuzzJazz");
}
TEST(FizzBuzzJazzTest, divisible140resultBuzzJazz) {
	checkFizzBuzz(140, "BuzzJazz");
}
TEST(FizzBuzzJazzTest, divisible105resultFizzBuzzJazz) {
	checkFizzBuzz(105, "FizzBuzzJazz");
}
TEST(FizzBuzzJazzTest, divisible840resultFizzBuzzJazz) {
	checkFizzBuzz(840, "FizzBuzzJazz");
}