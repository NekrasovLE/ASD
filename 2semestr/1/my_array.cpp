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

#if 0
void delete_element(int* arr, int& n, int x)
{
	for(int i = 0; i < n; ++i)
	{
		if(x == arr[i])
		{
			int* new_arr = new int[n - 1]; // create new array
			
			for(int j = 0; j < i; ++j) // copy previus elemens without deleted
			{
				new_arr[j] = arr[j];
			}
			for(int j = i + 1; j < n; ++j)
			{
				new_arr[j - 1] = arr[j];
			}

			delete[] arr;
			arr = new_arr;
			n -= 1;
			delete[] new_arr;
			break;
		}
	}
}


void add_element(int* arr, int& n, int x) 
{
	for(int i = 0; i < n; ++i)
	{
		if(arr[i] % 2 != 0)
		{
			int* new_arr = new int[n + 1];
			
			for(int j = 0; j <= i; ++j)
			{
				new_arr[j] = arr[j];
			}
			new_arr[i + 1] = x;
			for(int j = i + 2; j < n; ++j)
			{
				new_arr[j] = arr[j - 1];
			}

			delete[] arr;
			arr = new_arr;
			n += 1;
			delete[] new_arr;
			break;
		}
	}
}
#endif

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

