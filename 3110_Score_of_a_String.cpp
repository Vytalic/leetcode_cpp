/*
* Input: A string S
* Output: A score defined by the sum of the absolute difference between ASCII values of adjacent characters.
* Example: abcd = |1-2| + |2-3| + |3-4| = 1 + 1 + 1 = 3
*/

/*
* Thought Process:
* I first define the inputs and outputs.
* Then, I try to simplify the problem statement.
* I utililze the PPP (pseudocode programming process) to begin.
* I refine general statements.
*/

#include <iostream>
#include <string>

class Solution {
public:
    int scoreOfString(std::string s) {
        // Create copy of input parameter
        std::string inputString = s;
        // Calculate length of string
        int adjacentStringLength = s.length() - 1;

        int runningTotal = 0;
        // Iterate through the string until second to last char
        for (int i = 0; i < adjacentStringLength; i++) {
            // For the current item, subtract the next
            int currentCalc = s[i] - s[i + 1];
            // check if negative, add the absolute value of result
            if (currentCalc < 0) {
                runningTotal -= currentCalc;
            } else {
                runningTotal += currentCalc;
            }
        }
        return runningTotal;
    }
};

int main() {
    // Ask for string
    std::cout << "Enter a string:" << std::endl;
    std::string userString;
    std::getline(std::cin, userString);

    // Create instance of the class
    Solution solution;

    // Call function in solution
    int score = solution.scoreOfString(userString);

    // Print score
    std::cout << "Score of the string is: " << score << std::endl;

    return 0;
}