/*
* Approach:
*			1) Understand the problem statement
*			2) Simplify/rephrase the statement
*			3) Create a simple example based on input and output
*			4) Determine the most appropriate/relevant data structure
*			5) Describe required operations (searching, sorting, etc.)
*			6) Clarify constraints - input size limits, max, min, etc.
*			7) Divide problem into smaller pieces
*			8) Use the pseudocode programming process
*/

/*
* ORIGINAL PROBLEM STATEMENT
* --------------------------
* 
* You are given two strings s and t such that every character occurs at most once in s and t is a permutation of s.

The permutation difference between s and t is defined as the sum of the absolute difference between the index of the occurrence of each character in s and the index of the occurrence of the same character in t.

Return the permutation difference between s and t.
*/


/*
* SIMPLIFIED PROBLEM STATEMENT
* ----------------------------
* 
* You have two strings s and t. For each character in s, find out how far it has been moved in t.
* Add up all of the distances and return the result.
*/


#include <iostream>
#include <string>
#include <cmath>


class Solution {
public:
	int findPermutationDifference(std::string s, std::string t) {
		// find character s[i] in string t.
		int runningTotal = 0;
		for (int i = 0; i < s.size(); i++) {
			for (int j = 0; j < t.size(); j++) {
				// calculate the absolute value of the difference of their indices
				if (s[i] == t[j]) {
					// add that result to a running total
					runningTotal += abs(i - j);
					break;
				}
				
			}
		}
		
		// return the running total
		return runningTotal;
	}
};


int main() {
	// Initialize strings to use in function
	std::string s = "abc";
	std::string t = "bac";

	// Create instance of the class
	Solution solution;

	// Call the function
	int permutationDifference = solution.findPermutationDifference(s, t);

	// Print the result
	std::cout << "Output: " << permutationDifference;
}

/*
* Space Complexity = O(n); because the only space allocated is equal to the size of the input, n.
* Time Complexity = O(n^2); because the outer loop, of size n, iterates n times in the worst case. n*n = n^2
*/