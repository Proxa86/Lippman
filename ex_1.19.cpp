#include <iostream>

int main()
{

	int val1 = 0, val2 = 0;
	std::cout << "Enter namber 1:\n";
	std::cin >> val1;
	std::cout << "Enter namber 2:\n";
	std::cin >> val2;
	
	if(val1 > val2)
	{
    	std::cout << "Result: " << val2;
	}
	else
	{
		std::cout << "Result: " << val1;
	}
	std::cout << std::endl;
	return 0;
}
