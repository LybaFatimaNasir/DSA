#include<iostream>
using namespace std;
const int SIZE = 5;
int BinarySearch(int *Arr, int elem, int low, int high);
int binarySearch(int *Arr, int elem, int low, int high);
int main()
{
	//int size =5;
	// << " Enter the size of array : " << endl;
	//cin >> size;
	int arr[SIZE];
	int n ,BS;
	cout << " Enter elements of arrayin sorted order  :" << endl;
	for (int i = 1; i <= SIZE; ++i)
	{  
		cin >> arr[i];
	}
	cout << " Enter the element you want to find " << endl;
	cin >> n;
	BS=BinarySearch(arr, n, 0, SIZE);
	if (BS ==-1)
	{
		cout << " Element not found !" << endl;
	}
	else
		cout << " The elemnt " << n << "  found at " << BS << endl;
	system("pause");
	return 0;

	
}
int BinarySearch(int *Arr, int elem, int low,int high)
{
	int mid;
	
		if (low > high)
			return -1;
		mid = (low + high) / 2;
		if (elem == Arr[mid])
		
			return mid;
		if (elem < Arr[mid])
			return binarySearch(Arr, elem, low, mid - 1);
		else
			return binarySearch(Arr, elem, mid + 1, high);
		
	

}
int binarySearch(int *Arr, int index, int low, int high)
{
	for (int i = low; i < high; ++i)
	{
		if (Arr[i] == index)
		{
			return i;
		}
		
	}
}