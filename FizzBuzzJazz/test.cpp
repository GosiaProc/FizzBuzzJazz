#include "pch.h"
#include "../FBJStaticLib1/FizzBuzz.h"

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