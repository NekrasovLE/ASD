#include <iostream>

using namespace std;


void print_arr(float* arr, int n);

void rand_arr(float* arr, int n);

float sred_arr(float* arr, int n);


int main()
{
	int n = 1;
	//cout << "Enter n: ";
	//cin >> n;
	
	float arr[5] 
	{
		1, 2, 3, 4, 5
	};

	print_arr(arr, n);
	cout << sred_arr(arr, n);

	return 0;
}


void print_arr(float* arr, int n)
{
	for(int i = 0; i < n; ++i)
	{
		cout << *(arr + i) << "\n";
	}
}


/**
void rand_arr(float* arr, int n, float min, float max)
{
	for(int i = 0; i < n; ++i)
		arr[i] = rand() // Do Late
}
**/

float sred_arr(float* arr, int n)
{
	float s = 0;
	for(int i = 0; i < n; ++i)
	{
		s += i[arr];
	}
	return s / n;
}
