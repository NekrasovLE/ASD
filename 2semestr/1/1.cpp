#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>


void print_arr(float* arr, int n);

void rand_arr(float* arr, int n, float min = -1000, float max = 1000);

float sred_arr(float* arr, int n);


int main()
{
	int n = 1;
	printf("Enter n: ");
	if (scanf("%d", &n) != 1 && n < 0) 
	{
		printf("Error: INCORECT INPUT");
		abort();
	}

	float arr[n];

	rand_arr(arr, n);
	print_arr(arr, n);
	printf("\n%f\n",sred_arr(arr, n));

	return 0;
}


void print_arr(float* arr, int n)
{
	for(int i = 0; i < n; ++i)
	{
		printf("%f\n", arr[i]);
	}
}



void rand_arr(float* arr, int n, float min, float max)
{
	for(int i = 0; i < n; ++i)
		arr[i] = min + static_cast<float>(rand() / (static_cast<float>(RAND_MAX / (max - min))));
}


float sred_arr(float* arr, int n)
{
	float s = 0;
	for(int i = 0; i < n; ++i)
	{
		s += i[arr];
	}
	return s / n;
}
