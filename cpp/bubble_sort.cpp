#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
void bubbleSort(int arr[], int n){
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

// Function to print an array
void printArray(int arr[], int size){
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main() {
	int arr[] = { 7, 6, 5, 4, 3, 2, 1};
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	printArray(arr, N);
	return 0;
}
