#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> // For tolower()

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Move left index to the next alphanumeric character
        while (left < right && !std::isalnum(str[left])) {
            left++;
        }

        // Move right index to the previous alphanumeric character
        while (left < right && !std::isalnum(str[right])) {
            right--;
        }

        // Compare characters ignoring case
        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    std::string input;

    // Prompt the user for input
    std::cout << "Enter a word or phrase: ";
    std::getline(std::cin, input);

    // Check if the input is a palindrome
    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
