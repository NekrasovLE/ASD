#include <stdio.h>
#include <cstdlib>


void print_arr(float* arr, int n)
{
	for(int i = 0; i < n; ++i)
	{
		printf("%f ", arr[i]);
	}
	printf("\n");
}



void rand_arr(float* arr, int n, float min, float max)
{
	for(int i = 0; i < n; ++i)
		*(arr + i) = min + static_cast<float>(rand() / (static_cast<float>(RAND_MAX / (max - min))));
}


float min_arr(float* arr, int n)
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


void delete_element(float* arr, int n, float x)
{
	for(int i = 0; i < n; ++i)
	{
		if(x == arr[i])
		{
			for(int j = i; j < n; ++j)
			{
				arr[j] = arr[j + 1];
			}
			n -= 1;
			// Как здесь ещё уменьшить длину массива?
			// Или здесь нужно создавать новый другой величины и удалять старый?
		}
	}
}