// Input: Two integers num and t
// Output: An achievable number given by the operation below
// Operation: maxAchievableNum = t(operation) = t(2)
// Simply put, the greatest achievable number is equal to num + 2t

#include <iostream>

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        // return num + 2t
        return num + (2 * t);
    }
};


int main() {
    // Ask user for two ints
    int userIntegerNum = 0;
    int userIntegerT = 0;
    std::cout << "Enter a number: ";
    std::cin >> userIntegerNum;
    std::cout << "\nEnter another number: ";
    std::cin >> userIntegerT;
    std::cout << "\nComputing: " << userIntegerNum << " + 2(" << userIntegerT << ")";

    // Create instance of class
    Solution solution;

    // Compute max achievable number
    int maxAchievableNumber = solution.theMaximumAchievableX(userIntegerNum, userIntegerT);

    // Display result
    std::cout << " = " << maxAchievableNumber;

    return 0;
}