#pragma once


void print_arr(int* arr, int n);

int min_arr(int* arr, int n);
//TO DO
int max_arr(int* arr, int n);

void rand_arr(int* arr, int n, int min = -20, int max = 20);


void delete_element(int* arr, int& n, int x);
void add_element(int* arr, int& n, int x);

//TO DO
void sort_arr(int* arr, int n);


//TO DO
void print_multidim_arr(int** arr, int n, int m);
//TO DO
void rand_multidim_arr(int** arr, int n, int m, int min = -100, int max = 100);
//TO Do

struct out_min_max
{
    int x;
    int n, m;
};

//TO DO
out_min_max min_multidim_arr(int** arr, int n, int m);
out_min_max max_multidim_arr(int** arr, int n, int m);

//TO DO
void add_row(int** arr, int &n, int &m, int row);
void add_column(int** arr, int &n, int &m, int colum);
//TO DO
void delete_row(int** arr, int &n, int &m, int row);
void delete_column(int** arr, int &n, int &m, int colum);
