// Given nums, build ans, of same length.
// Where ans[i] = nums[nums[i]]
// For each index
// From 0 to lengthArray - 1

/*
* Simply put, ans[i] equals the value of nums at position nums[i]
*/

/*
* Constructing the solution:
* First, I figure out what is even going on.
* The hardest part seems to be figuring out what the problem actually is.
*/

#include <iostream>
#include <vector>

class Solution {
public:
	std::vector<int> buildArray(std::vector<int>& nums) {
		// Define a placeholder array
		std::vector<int> numsResult;

		// Index into every element of nums
		for (int i = 0; i < nums.size(); i++) {
			// Add the item to placeholder array
			numsResult.push_back(nums[nums[i]]);
		}	

		// return result
		return numsResult;
	}
};

int main() {
	// Build and initialize an array
	std::vector<int> nums = { 0, 2, 4, 1, 3 };

	// Print the original array
	std::cout << "Original array:";
	for (int i = 0; i < nums.size(); i++) {
		std::cout << " " << nums[i];
	}
	std::cout << std::endl;

	// Send it to the solution
	Solution solution;
	std::vector<int> numsResult = solution.buildArray(nums);

	// Return the result
	std::cout << "New array:";
	for (int i = 0; i < numsResult.size(); i++) {
		std::cout << " " << numsResult[i];
	}
}

/*
* ANALYSIS:
* Space Complexity = O(n); because I create another array of size n to hold the result.
* Time Complexity = O(n); because I perform one operation per item in the array.
*/