/*
Name: hello_world.cpp
Author: sir588394
Date: 2021-11-29
Description: Prints "Hello World!" into the console using iostream.
*/

#include <iostream>  // Includes the iostream library.

/**
 * @brief Main function
 * 
 * @return int
 */
int main(void) {  // The main function. Does not take any arguments.
    std::cout << "Hello World!"
              << std::endl;  // Prints "Hello World!" using the cout function
                             // from the iostream library.
    return 0;                // Returns 0 to the operating system.
}