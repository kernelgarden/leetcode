#include <iostream>
#include <vector>
#include "SingleNumber.cpp"

int main(int argc, char* argv[])
{
	SingleNumber s;

	std::vector<int> inputs;

	auto num = 0;
	while (std::cin >> num)
	{
		inputs.push_back(num);
	}

	std::cout << s.solve2(inputs) << std::endl;

	system("pause");


	return 0;
}