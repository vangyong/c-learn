#include <iostream>

int main(void)
{
	int intValue;
	while (true)
	{
		if (std::cin >> intValue) {
			std::cout << "please input:" << std::cin.rdstate() << std::endl;
		}else {
			std::cout << "input error:"<< std::cin.rdstate() << std::endl;
			break;
		}
	}
	std::cout << "failbit:" << std::ios_base::failbit << std::endl;
	system("pause");
	return 0;
}
