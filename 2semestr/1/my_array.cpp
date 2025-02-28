#include "my_array.h"
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>


void print_arr(int* arr, int n)
{
	for(int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void rand_arr(int* arr, int n, int min, int max)
{
	srand(time(NULL));
	for(int i = 0; i < n; ++i)
		*(arr + i) = min + (rand() % (max - min));
}


int min_arr(int* arr, int n)
{
	int min = arr[0];
	for(int i = 1; i < n; ++i)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}


void sort_arr(int* arr, int n)
{
	int start = 0, end = n - 1;
	bool swapped = 1;

    while ((start < end) && swapped)
	{
        swapped = 0;
        for (int i = 0; i < end; ++i)
            if (arr[i] > arr[i + 1])
			{
				int t = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = t;
                swapped = 1;
			}
        if (!swapped)
            break;
        swapped = 0;
        end -= 1;
        for (int i = end - 1; i > start; --i)
            if (arr[i] > arr[i + 1])
			{
                int t = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = t;
                swapped = 1;
			}
        start += 1;
	}
}


void delete_element(int* arr, int& n, int x)
{
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == x)
		{ 
			for (int j = i; j < n; ++j)
			{
				arr[j] = arr[j + 1];
			}
			arr = (int*)realloc(arr, --n);
		}
	}
}


void add_element(int* arr, int& n, int x)
{
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		(arr[i] %  2 = 0) ? k++ : ; 
	}
	int* new_arr = new int[n + k];
	for (int i = 0, j = 0; i < n; ++i, ++j)
	{
		new_arr[j] = arr[i]
		if (arr[i] % 2 == 0)
		{
			new_arr[j + 1] = 0;
			++j;
		}
	}	
#if 0
	for (int i = 0; i < n; ++i)
	{ 
		if (*(arr + i) % 2 == 0)
		{
			arr = (int*)realloc(arr, ++n);
			for (int j = n; j > i + 1; --j)
			{
				*(arr + j) = *(arr + j - 1);
			}
			arr[i + 1] = x;
		}
		i += 1;
	}
#endif
}
