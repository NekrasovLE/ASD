#include "my_array.h"
#include <stdio.h>
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

