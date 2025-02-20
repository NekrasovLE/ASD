#include "my_array.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n = 1;
	printf("Enter n: ");
	if (scanf("%d", &n) != 1 && n < 0) 
	{
		printf("Error: INCORECT INPUT");
		abort();
	}

	int *arr = new int[n]{};

	rand_arr(arr, n);
	print_arr(arr, n);

	#if 0
	delete_element(&arr, &n, min_arr(arr, n));
	print_arr(arr, n);
	
	add_element(&arr, &n, 0);
	print_arr(arr, n);
	#endif

	return 0;
}
