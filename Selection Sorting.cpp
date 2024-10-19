#include<iostream>
using namespace std;
int main() {
	cout << "Enter the number of elements of array:\n";

	int n;
	cin >> n;
	int* array= new int[n];
	cout << "Enter the values of array\n";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	
	
	for (int j =0; j<n-1; j++) {
		int largest = array[j];
		int index_l = j;
		for (int i=j+1; i < n; i++) {

			if (array[i] > largest) {
				
				largest = array[i];
				index_l = i;


			}
			
		}
		swap(array[index_l], array[j]);

	
	}
	cout << "Sorted Array in Decending order is:\n";
	for (int i = 0; i < 5; i++) {
		cout << array[i];
		cout << " ";
	}
	return 0;
}