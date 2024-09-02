#include <iostream>

int main() {
    int n;
    
    // Prompt the user to enter the number of terms
    std::cout << "Enter the number of terms for the Fibonacci series: ";
    std::cin >> n;

    // Check for non-positive input
    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    // Initialize the first two terms of the Fibonacci series
    int a = 0, b = 1;

    // Display the Fibonacci series
    std::cout << "Fibonacci series up to " << n << " terms: ";

    for (int i = 1; i <= n; ++i) {
        std::cout << a << " ";

        // Calculate the next term
        int next = a + b;
        a = b;
        b = next;
    }

    std::cout << std::endl;

    return 0;
}
