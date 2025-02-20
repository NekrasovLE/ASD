#include "my_array.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, m;
	printf("Enter n: ");
	if (scanf("%d%d", &n, &m) != 2 or n < 0 or m < 0) 
	{
		printf("Error: INCORECT INPUT");
		abort();
	}

	int** arr = new int*[n]{};
    for(int i = 0; i < n; ++i)
    {
        arr[i] = new int[m];
    }

	rand_multidim_arr(arr, n, m, -100, 100);
	print_multidim_arr(arr, n, m);

	out_min_max min = min_multidim_arr(arr, n, m);
	out_min_max max = max_multidim_arr(arr, n, m);
	printf("min: %d\nn, m: %d, %d", min.x, min.n, min.m);
	printf("max: %d\nn, m: %d, %d", max.x, max.n, max.m);
}