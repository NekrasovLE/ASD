#include <stdio.h>
#include <stdlib.h>

#include "my_array.h"


int main()
{
	int n = 1;
	printf("Enter n: ");
	if (scanf("%d", &n) != 1 && n < 0) 
	{
		printf("Error: INCORECT INPUT");
		abort();
	}

	float *arr {new float[n]{}};

	rand_arr(arr, n);
	print_arr(arr, n);


	return 0;
}
