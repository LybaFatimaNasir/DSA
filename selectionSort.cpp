#include<iostream>
using namespace std;
void selectionSort(int *Arr);
const int SIZE = 5;
int main()
{
	int arr[SIZE];
	cout << " Enter elements of array :" << endl;
	for (int i = 0; i < SIZE; ++i)
	{
		cin >> arr[i];
	}
	selectionSort(arr);
	return 0;
}
void selectionSort(int *Arr)
{
	int small = Arr[0];
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = i; j < SIZE ; ++j)
		{
			if (Arr[j] < small)
			{
				small=Arr[j];
			}


		}
	}
}