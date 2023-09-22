#include "sortingFunctions.h"

int main() {
	//declare all the arrays
	

	//bubblesort
	bubbleSort(arr, 10);

	for (int i = 0; i < 10; i++) {
		cout << arr[i];
	}
	cout <<" Bubble Sort" << endl;
	//declare all the arrays again (pull more data into them from file)

	//insertionsort
	for (int i = 0; i < 10; i++) {
		fin >> arr[i];
	}
	insertionSort(arr, 10);

	for (int i = 0; i < 10; i++) {
		cout << arr[i];
	}
	cout << " Insertion Sort" << endl;
	//declare all the arrays again

	//selectionsort
	SelectionSort(arr, 10);

	for (int i = 0; i < 10; i++) {
		cout << arr[i];
	}
	//declare all the arrays again

	//shell
	shellSort(arr, 10);

	for (int i = 0; i < 10; i++) {
		cout << arr[i];
	}
	//declare all the arrays again 

	//quicksort
	//quickSort(arr, 10);

	//for (int i = 0; i < 10; i++) {
	//	cout << arr[i];
	//}
	////declare all the arrays again 

	////merge
	//mergeSort(arr, 10);

	//for (int i = 0; i < 10; i++) {
	//	cout << arr[i];
	//}
	//declare all the arrays again 
	//Extra credit

	return 0;
}