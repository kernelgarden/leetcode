#include <unordered_map>
#include <vector>

using std::vector;

class Solution {
public:
	// brute force case
	/*
	vector<int> twoSum(vector<int>& nums, int target) {
		for (auto i = 0; i < nums.size(); i++)
		{
			for (auto j = 0; j < nums.size(); j++)
			{
				if (i == j)
					continue;

				if (nums[i] + nums[j] == target)
				{
					//int arr[] = {nums[i], nums[j]};
					//vector<int> result(arr, arr + (sizeof(arr) / sizeof(int)));
					vector<int> result {i, j};
					return result;
				}
			}
		}

		return nums;
	}
	*/

	// better solution?
	/*
	vector<int> twoSum(vector<int>& nums, int target) {
		auto size = nums.size();

		for (auto i = 0; i < size; i++)
		{
			auto temp = target - nums[i];

			for (auto j = i + 1; j < size; j++)
			{
				if (nums[j] == temp)
				{
					vector<int> result {i, j};
					return result;
				}
			}
		}

		return nums;
	}
	*/

	// two pass hash solution
	/*
	vector<int> twoSum(vector<int>& nums, int target) {
		std::unordered_map<int, int> hash;

		// 해시를 먼저 진행한다.
		for (auto i = 0; i < nums.size(); i++)
			hash.insert({nums[i], i});

		for (auto i = 0; i < nums.size(); i++)
		{
			auto temp = target - nums[i];

			auto value = hash.find(temp);
			if ((value != hash.end()) && (value->second != i))
			{
				vector<int> result {i, value->second};
				return result;
			}
		}

		return nums;
	}
	*/

	// one pass hash solution O(N)
	vector<int> twoSum(vector<int>& nums, int target) {
		std::unordered_map<int, int> hash;

		for (auto i = 0; i < nums.size(); i++)
		{
			hash.insert({ nums[i], i });

			auto temp = target - nums[i];

			// 이전까지의 value들은 해시되어있다.
			auto value = hash.find(temp);
			if ((value != hash.end()) && (value->second != i))
			{
				vector<int> result{ i, value->second };
				return result;
			}
		}

		return nums;
	}
};