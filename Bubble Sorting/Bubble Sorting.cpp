// Bubble Sorting.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int n = 10;
void Rand(int *arr);
void Save_copy(int *arr, int *copy_arr);
void Print(int *arr);

int main()
{
	int arr[n];
	int copy_arr[n];
	Rand(arr);
	Save_copy(arr, copy_arr);
	bool indicator = true;
	int counter = 0;
	while (indicator)
	{
		indicator = false;
		Print(arr);
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > arr[i + 1] && (i + 1) < n)
			{
				arr[i] = copy_arr[i + 1];
				arr[i + 1] = copy_arr[i];
				copy_arr[i] = arr[i];
				copy_arr[i + 1] = arr[i + 1];
				indicator = true;
			}
		}	
		if (indicator)
			counter++;
	}
	cout << "Number of passes: " << counter << endl;
    return 0;
}
void Rand(int *arr)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 50;
	}
}
void Save_copy(int *arr, int *copy_arr)
{
	for (int i = 0; i < n; i++)
	{
		copy_arr[i] = arr[i];
	}
}
void Print(int *arr)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}