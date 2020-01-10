#include<iostream>
using namespace std;
const int SIZE = 5;
void insertionSort(int i, int Arr[], int SIZE) {
	if (i < SIZE)
	{
		int j;
		int temp = Arr[i];

		for (j = i; j > 0 && Arr[j - 1] > temp; j--)
			Arr[j] = Arr[j - 1];
		Arr[j] = temp;

		insertionSort(++i, Arr, SIZE);

	}
}

int main() {
	int Arr[SIZE];
	for (int i = 0; i < SIZE; ++i) {
		cout  << "Enter element : ";
		cin >> Arr[i];
	}
	insertionSort(0, Arr, SIZE);
	cout << "\nAfter Insertion Sort" << endl;
	for (int i = 0; i < SIZE; ++i) {
		cout << Arr[i] <<endl;
	}
	system("pause");
	return 0;
}