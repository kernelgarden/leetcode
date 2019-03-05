#include <vector>

class Solution {
public:
	// O(n) solution, O(n) extra size
	void rotate(std::vector<int>& nums, int k) {
		auto size = nums.size();
		auto start = size - (k % size);
		auto end = start + size;
		std::vector<int> result;
		result.reserve(size);

		for (auto i = start; i < end; i++)
			result.push_back(nums[i % size]);

		nums = result;
	}
};