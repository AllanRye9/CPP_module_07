#include "../include/Iter.hpp"

void print_letters(char &character)
{
    std::cout << character << std::endl;
}

void test_to_upper(char &character)
{
    if (character >= 'a' && character <= 'z')
        character -= 32;
}

void test_to_lower(char &character)
{
    if (character >= 'A' && character <= 'Z')
        character += 32;
}

void print_number(int &number)
{
    std::cout << number << std::endl;
}

void make_zero(int &number)
{
    number = 0;
}

int main()
{
    char array[6] = "Hello";

    iter(array, strlen(array), print_letters);

    iter(array, strlen(array), test_to_upper);
    std::cout << array << std::endl;
    iter(array, strlen(array), test_to_lower);
    std::cout << array << std::endl;

    int numbers[5] = {1, 2, 3, 4, 5};
    iter(numbers, 5, print_number);
    iter(numbers, 5, make_zero);
    iter(numbers, 5, print_number);
    return 0;
}