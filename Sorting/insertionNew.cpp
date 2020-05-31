#include<iostream>
#define MAX 100
using namespace std;
void insertionSort(int *arr, int size){
	for(int i = 1; i < size; i++){
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
int main(){
	int n, arr[MAX];
	cout << "Enter the size of the array: ";
	cin >> n;
	cout << "Enter the array as a single line: ";
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	insertionSort(arr, n);
	cout << "After insertion sort: ";
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	endl(cout);
	return 0;
}