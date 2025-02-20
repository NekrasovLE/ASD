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


void rand_arr(int* arr, int n, int max)
{
	srand(time(NULL));
	for(int i = 0; i < n; ++i)
		*(arr + i) = rand() % max;
}


float min_arr(int* arr, int n)
{
	float min = arr[0];
	for(int i = 1; i < n; ++i)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}


void delete_element(int** arr, int* n, float x)
{
	for(int i = 0; i < *n; ++i)
	{
		if(x == (*arr)[i])
		{
			int* new_arr = new int[*n - 1]; // create new array
			
			for(int j = 0; j < i; ++j) // copy previus elemens without deleted
			{
				new_arr[j] = (*arr)[j];
			}
			for(int j = i + 1; j < *n; ++j)
			{
				new_arr[j - 1] = (*arr)[j];
			}

			delete[] *arr;
			*arr = new_arr;
			*n -= 1;
			delete[] new_arr;
		}
	}
}


void add_element(int** arr, int* n, int x)
{
	for(int i = 0; i < *n; ++i)
	{
		if((*arr)[i] % 2 != 0)
		{
			int* new_arr = new int[*n + 1];
			
			for(int j = 0; j <= i; ++j)
			{
				new_arr[j] = (*arr)[j];
			}
			new_arr[i + 1] = x;
			for(int j = i + 2; j < *n; ++j)
			{
				new_arr[j] = (*arr)[j - 1];
			}

			delete[] *arr;
			*arr = new_arr;
			*n -= 1;
			delete[] new_arr;
		}
	}
}