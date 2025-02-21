#include "my_array.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, m;
	printf("Enter n and m with space: ");
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

	rand_multidim_arr(arr, n, m);
	print_multidim_arr(arr, n, m);
}