
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

void func(int** arr, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if ((i + j) < n - 1)
				arr[i][j] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(4) << arr[i][j];
		cout << endl << endl;
	}
}

int main()
{
	int** arr, n;
	cout << "Enter order of matrix:";
	cin >> n;
	arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 1;
		}
	}

	func(arr, n);

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
	return 0;
}
