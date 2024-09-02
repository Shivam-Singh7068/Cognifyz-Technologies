#include <iostream>
#include <vector>  // For using the vector container

int main() {
    int numSubjects;
    std::vector<double> grades;
    double grade, sum = 0.0, average;

    // Prompt the user to enter the number of subjects
    std::cout << "Enter the number of subjects: ";
    std::cin >> numSubjects;

    // Check for valid number of subjects
    if (numSubjects <= 0) {
        std::cout << "The number of subjects must be a positive integer." << std::endl;
        return 1;
    }

    // Input grades for each subject
    for (int i = 0; i < numSubjects; ++i) {
        std::cout << "Enter the grade for subject " << (i + 1) << ": ";
        std::cin >> grade;

        // Optional: Validate grade input (e.g., between 0 and 100)
        if (grade < 0 || grade > 100) {
            std::cout << "Invalid grade! Please enter a grade between 0 and 100." << std::endl;
            --i;  // Repeat the current iteration
            continue;
        }

        grades.push_back(grade);
        sum += grade;
    }

    // Calculate the average grade
    average = sum / numSubjects;

    // Display the average grade
    std::cout << "The average grade is: " << average << std::endl;

    return 0;
}
