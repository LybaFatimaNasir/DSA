#include<iostream>
using namespace std;
void bubbleSort(int *Arr, int size);
void swap(int &n1, int &n2);
const int SIZE = 5;
//int COUNT;
int main()
{
	int arr[SIZE];
	cout << " Enter elemets of array :" << endl;
	for (int i = 0; i < SIZE; ++i)
	{
		cin >> arr[i];

	}
	bubbleSort(arr, SIZE);
	cout << " Arary after  bubble sorting " << endl;
	for (int i = 0; i < SIZE; ++i)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
void bubbleSort(int *Arr, int size)
{
	for (int i = 0; i < size-1; ++i)
	{
		for (int j = 0; j < (size-i)-1; ++j)
		{
			if (Arr[j] > Arr[j + 1])
			{
				swap(Arr[j], Arr[j + 1]);
				//COUNT++;
			}

		}
	}
}
void swap(int &n1, int &n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;

}
