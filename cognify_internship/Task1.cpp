#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // Take input from the user
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);  // Using getline to allow spaces in the input

    // Reverse the string
    std::reverse(input.begin(), input.end());

    // Display the reversed string
    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}
