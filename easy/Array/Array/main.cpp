#include <iostream>
#include <vector>
#include "SingleNumber.cpp"
#include "TwoSum.cpp"

int main(int argc, char* argv[])
{
	SingleNumber s;
	TwoSum t;

	int target;
	std::cin >> target;

	std::vector<int> inputs;

	auto num = 0;
	while (std::cin >> num)
	{
		inputs.push_back(num);
	}

	//std::cout << s.solve2(inputs) << std::endl;
	//std::cout << t.twoSum(inputs, target) << std::endl;

	system("pause");


	return 0;
}