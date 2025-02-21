#include "../include/Array.hpp"

#define MAX_VAL 750

int main() {
    Array<int> intArray(5);
    for (unsigned int i = 0; i < 5; i++) {
        intArray[i] = i * 10;
    }

    std::cout << "intArray contents: ";
    for (unsigned int i = 0; i < 5; i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    Array<std::string> strArray(3);
    strArray[0] = "Hello";
    strArray[1] = "World";
    strArray[2] = "Array";

    std::cout << "strArray contents: ";
    for (unsigned int i = 0; i < 3; i++) {
        std::cout << strArray[i] << " ";
    }
    std::cout << std::endl;

    Array<int> copiedArray = intArray;
    std::cout << "copiedArray contents (after copy): ";
    for (unsigned int i = 0; i < 5; i++) {
        std::cout << copiedArray[i] << " ";
    }
    std::cout << std::endl;

    Array<int> assignedArray(3);
    assignedArray = intArray;
    std::cout << "assignedArray contents (after assignment): ";
    for (unsigned int i = 0; i < 5; i++) {
        std::cout << assignedArray[i] << " ";
    }
    std::cout << std::endl;
    try {
        std::cout << intArray[11] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}