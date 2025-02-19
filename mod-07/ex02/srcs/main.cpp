#include "../include/Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// int main()
// {
//     Array<int> values(10);
//     Array<int>newArray(10); 

//     // reinterpret_cast<int>(&newArray);
//     values[0] = 42;
//     values[1] = 43;
//     values[2] = 44;

//     newArray = values;
//     values[3];
//     newArray[3] = 50;
//     newArray[4] = 100;
//     std::cout << newArray[0] << std::endl;
//     std::cout << newArray[1] << std::endl;
//     std::cout << newArray[4] << std::endl;
//     std::cout << newArray[3] << std::endl;

//     int * a = new int();
//     std::cout << *a << std::endl;
//     return 0;
// }