#include <iostream>

int main()
{
    int a{5}; // List initialization, preferred method
    // int b { 4.5 }; causes an error, which = and ( ) don't cause
    std::cout << "Hello, world!"; // cout means character output, << means output to the right of it, std means standard library, :: means that cout is a member of the std namespace

    int x{};       // best practice is to initialize variables on creation
    std::cin >> x; // cin means character input from stdin

    [[maybe_unused]] double pi{3.14159}; // Don't complain if pi is unused

    return 0;
}