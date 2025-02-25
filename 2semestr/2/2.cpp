#include <iostream>

int main()
{
	char str[100];
	std::cin.getline(str, 100);
	int sum = 0, max = 0;
	for (int i = 0; i < strlen(str); ++i)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum += str[i] - '0';
			if (max < (str[i] - '0'))
				max = str[i] - '0';
		}
	}
	std::cout << sum  << '\t' << max << '\n';
}

