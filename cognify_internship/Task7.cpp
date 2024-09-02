#include <iostream>
#include <vector>
#include <algorithm> // For sort()

int main() {
    int n;
    char order;
    
    // Prompt the user to input the number of elements in the array
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    // Check for a valid number of elements
    if (n <= 0) {
        std::cout << "The number of elements must be a positive integer." << std::endl;
        return 1;
    }

    std::vector<int> arr(n);

    // Input the array elements
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Prompt the user to choose the sorting order
    std::cout << "Enter 'A' for ascending or 'D' for descending order: ";
    std::cin >> order;

    // Sort the array based on the chosen order
    if (order == 'A' || order == 'a') {
        std::sort(arr.begin(), arr.end());
    } else if (order == 'D' || order == 'd') {
        std::sort(arr.begin(), arr.end(), std::greater<int>());
    } else {
        std::cout << "Invalid sorting order entered. Please enter 'A' or 'D'." << std::endl;
        return 1;
    }

    // Display the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
