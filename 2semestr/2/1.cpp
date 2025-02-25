#include <iostream>

int main()
{
	char str[50];
	std::cin.getline(str, 50);
	int k = (str[0] == ' ') ? 0 : 1;
	for (int i = 1; i < strlen(str); ++i)
	{
		if (str[i - 1] == ' ' and str[i] != ' ')
		{
			++k;
		}
	}
	std::cout << k << '\n';
}



