#include <iostream>
#include <vector>

class SingleNumber
{
public: 

	// n^2 solution, full search
	int solve(std::vector<int>& nums)
	{
		for (auto i = 0; i < nums.size(); i++)
		{
			auto flag = true;
			for (auto j = 0; j < nums.size(); j++)
			{
				if (i == j)
					continue;

				if (nums[j] == nums[i])
					flag = false;
			}

			if (flag)
				return nums[i];
		}

		return 0;
	}

	// n solution
	int solve2(std::vector<int>& nums)
	{
		auto temp = 0;
		for (auto i = 0; i < nums.size(); i++)
			temp ^= nums[i];
		return temp;
	}
};