#include <iostream>

int main()
{
    int a{5}; // List initialization, preferred method
    // int b { 4.5 }; causes an error, which = and ( ) don't cause
    std::cout << "Hello, world!"; // cout means character output, << means output to the right of it, std means standard library, :: means that cout is a member of the std namespace

    std::cout << std::endl; // endl means end of line, and also flushes the output buffer, which means it forces the output to be displayed immediately

    std::cout << "Hello again!\n"; // \n means new line, but doesn't flush the output buffer

    int x{};                         // best practice is to initialize variables on creation
    std::cout << "Enter a number: "; // prompt the user for input
    std::cin >> x;                   // cin means character input from stdin

    std::cout << "You entered: " << x << '\n'; // when alone, '\n' is preferred over "\n"

    [[maybe_unused]] double pi{3.14159}; // Don't complain if pi is unused

    return 0;
}