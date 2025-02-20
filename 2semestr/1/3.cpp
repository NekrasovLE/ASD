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

	int A, B;
	printf("Enter A and B with space: ");
	if (scanf("%d", &A, &B) != 2) 
	{
		printf("Error: INCORECT INPUT");
		abort();
	}

	int *arr = new int[n]{};

    rand_arr(arr, n, A, B);
    print_arr(arr, n);
    
    sort_arr(&arr, n);
    print_arr(arr, n);
}