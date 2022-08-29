#include "pch.h"
#include "FizzBuzz.h"

std::string FizzBuzz(int input)
{
    std::string result;

    if (input % 3 == 0)
        result += "Fizz";
    if (input % 5 == 0)
        result += "Buzz";
    if (input % 7 == 0)
        result += "Jazz";
    if (input % 3 != 0 && input % 5 != 0 && input % 7 != 0)
        result = std::to_string(input);
    return result;
}
