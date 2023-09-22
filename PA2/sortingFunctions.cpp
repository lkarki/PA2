#include "sortingFunctions.h"

void runBubbleSort()
{
	ifstream fin;
	fin.open(DATA_FILE_10K);
	if (fin.fail()) {
		cout << "failed to open " + DATA_FILE_10K;
		exit(1);
	}

	int arr[10];
	for (int i = 0; i < 10; i++) {//get data for 10K file
		fin >> arr[i];
	}

	fin.close();

	bubbleSort(arr, 10);

	fin.open(DATA_FILE_100K);
	if (fin.fail()) {
		cout << "failed to open " + DATA_FILE_100K;
		exit(2);
	}

	for (int i = 0; i < 100; i++) {//get data for 100K file
		fin >> arr[i];
	}

	fin.close();

	bubbleSort(arr, 100);//sort 100k file

	fin.open(DATA_FILE_1M);
	if (fin.fail()) {
		cout << "failed to open " + DATA_FILE_100K;
		exit(3);
	}

	for (int i = 0; i < 1000; i++) {//get data for 1M file
		fin >> arr[i];
	}

	fin.close();

	bubbleSort(arr, 1000);

}

void runInsertionSort()
{
}

void runMergeSort()
{
}

void runQuickSort()
{
}

void runSelectionSort()
{
}

void runShellSort()
{
}
