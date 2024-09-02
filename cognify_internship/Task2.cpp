#include <iostream>
#include <limits> // For handling input validation

int main() {
    double num1, num2, result;
    char op;

    // Taking inputs from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter an operator (+, -, *, /, %): ";
    std::cin >> op;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform arithmetic operation based on the operator
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
                return 1; // Return an error code
            }
            break;
        case '%':
            if (static_cast<int>(num2) != 0) {
                result = static_cast<int>(num1) % static_cast<int>(num2);
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
                return 1; // Return an error code
            }
            break;
        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            return 1; // Return an error code
    }

    // Display the result
    std::cout << "The result is: " << result << std::endl;

    return 0;
}
