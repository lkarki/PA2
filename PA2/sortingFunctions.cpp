#include "sortingFunctions.h"
#include "timerSystem.h"
void runBubbleSort()
{
	TimerSystem timer;

	ifstream fin10;
	ifstream fin100;
	ifstream fin1m;

	int size1 = 10000;
	int size2 = 100000;
	int size3 = 1000000;
	int i;

	int* array10K;
	int* array100K;
	int* array1M;

	array10K = new int[size1];
	array100K = new int[size2];
	array1M = new int[size3];

	fin10.open(DATA_FILE_10K);
	if (fin10.fail()) {
		cout << "failed to open " + DATA_FILE_10K;
		exit(1);
	}

	fin100.open(DATA_FILE_100K);
	if (fin100.fail()) {
		cout << "failed to open " + DATA_FILE_100K;
		exit(2);
	}

	fin1m.open(DATA_FILE_1M);
	if (fin1m.fail()) {
		cout << "failed to open " + DATA_FILE_1M;
		exit(3);
	}

	for (i = 0; i < size1; i++) {//get data for 10K file
		fin10 >> array10K[i];
	}

	for (i = 0; i < size2; i++) {//get data for 100K file
		fin100 >> array100K[i];
	}

	for (i = 0; i < size3; i++) {//get data for 1M file
		fin1m >> array1M[i];
	}

	fin10.close();
	fin100.close();
	fin1m.close();

	timer.startClock();
	bubbleSort(array10K, size1);
	cout << "The time it took for bubble sort to sort 10,000 items was " << timer.getTime() << endl;

	timer.startClock();
	bubbleSort(array100K, size2);
	cout << "The time it took for bubble sort to sort 100,000 items was " << timer.getTime() << endl;

	timer.startClock();
	bubbleSort(array1M, size3);
	cout << "The time it took for bubble sort to sort 1,000,000 items was " << timer.getTime() << endl;
	cout << endl;

	delete[] array10K;
	delete[] array100K;
	delete[] array1M;

}

void runInsertionSort()
{
	TimerSystem timer;

	ifstream fin10;
	ifstream fin100;
	ifstream fin1m;

	int size1 = 10000;
	int size2 = 100000;
	int size3 = 1000000;
	int i;

	int* array10K;
	int* array100K;
	int* array1M;

	array10K = new int[size1];
	array100K = new int[size2];
	array1M = new int[size3];

	fin10.open(DATA_FILE_10K);
	if (fin10.fail()) {
		cout << "failed to open " + DATA_FILE_10K;
		exit(1);
	}

	fin100.open(DATA_FILE_100K);
	if (fin100.fail()) {
		cout << "failed to open " + DATA_FILE_100K;
		exit(2);
	}

	fin1m.open(DATA_FILE_1M);
	if (fin1m.fail()) {
		cout << "failed to open " + DATA_FILE_1M;
		exit(3);
	}

	for (i = 0; i < size1; i++) {//get data for 10K file
		fin10 >> array10K[i];
	}

	for (i = 0; i < size2; i++) {//get data for 100K file
		fin100 >> array100K[i];
	}

	for (i = 0; i < size3; i++) {//get data for 1M file
		fin1m >> array1M[i];
	}

	fin10.close();
	fin100.close();
	fin1m.close();

	timer.startClock();//timing 10k
	insertionSort(array10K, size1);
	cout << "The time it took for insertion sort to sort 10,000 items was " << timer.getTime() << endl;

	timer.startClock();//timing 100k
	insertionSort(array100K, size2);
	cout << "The time it took for insertion sort to sort 100,000 items was " << timer.getTime() << endl;

	timer.startClock();//timing 1 million
	insertionSort(array1M, size3);
	cout << "The time it took for insertion sort to sort 1,000,000 items was " << timer.getTime() << endl;
	cout << endl;

	delete[] array10K;
	delete[] array100K;
	delete[] array1M;
}

void runMergeSort()
{
}

void runQuickSort()
{
}

void runSelectionSort()
{
	TimerSystem timer;

	ifstream fin10;
	ifstream fin100;
	ifstream fin1m;

	int size1 = 10000;
	int size2 = 100000;
	int size3 = 1000000;
	int i;

	int* array10K;
	int* array100K;
	int* array1M;

	array10K = new int[size1];
	array100K = new int[size2];
	array1M = new int[size3];

	fin10.open(DATA_FILE_10K);
	if (fin10.fail()) {
		cout << "failed to open " + DATA_FILE_10K;
		exit(1);
	}

	fin100.open(DATA_FILE_100K);
	if (fin100.fail()) {
		cout << "failed to open " + DATA_FILE_100K;
		exit(2);
	}

	fin1m.open(DATA_FILE_1M);
	if (fin1m.fail()) {
		cout << "failed to open " + DATA_FILE_1M;
		exit(3);
	}

	for (i = 0; i < size1; i++) {//get data for 10K file
		fin10 >> array10K[i];
	}

	for (i = 0; i < size2; i++) {//get data for 100K file
		fin100 >> array100K[i];
	}

	for (i = 0; i < size3; i++) {//get data for 1M file
		fin1m >> array1M[i];
	}

	fin10.close();
	fin100.close();
	fin1m.close();

	timer.startClock();//timing 10k
	selectionSort(array10K, size1);
	cout << "The time it took for selection sort to sort 10,000 items was " << timer.getTime() << endl;

	timer.startClock();//timing 100k
	selectionSort(array100K, size2);
	cout << "The time it took for selection sort to sort 100,000 items was " << timer.getTime() << endl;

	timer.startClock();//timing 1 million
	selectionSort(array1M, size3);
	cout << "The time it took for selection sort to sort 1,000,000 items was " << timer.getTime() << endl;
	cout << endl;

	delete[] array10K;
	delete[] array100K;
	delete[] array1M;
}

void runShellSort()
{
	TimerSystem timer;

	ifstream fin10;
	ifstream fin100;
	ifstream fin1m;

	int size1 = 10000;
	int size2 = 100000;
	int size3 = 1000000;
	int i;

	int* array10K;
	int* array100K;
	int* array1M;

	array10K = new int[size1];
	array100K = new int[size2];
	array1M = new int[size3];

	fin10.open(DATA_FILE_10K);
	if (fin10.fail()) {
		cout << "failed to open " + DATA_FILE_10K;
		exit(1);
	}

	fin100.open(DATA_FILE_100K);
	if (fin100.fail()) {
		cout << "failed to open " + DATA_FILE_100K;
		exit(2);
	}

	fin1m.open(DATA_FILE_1M);
	if (fin1m.fail()) {
		cout << "failed to open " + DATA_FILE_1M;
		exit(3);
	}

	for (i = 0; i < size1; i++) {//get data for 10K file
		fin10 >> array10K[i];
	}

	for (i = 0; i < size2; i++) {//get data for 100K file
		fin100 >> array100K[i];
	}

	for (i = 0; i < size3; i++) {//get data for 1M file
		fin1m >> array1M[i];
	}

	fin10.close();
	fin100.close();
	fin1m.close();

	timer.startClock();//timing 10k
	shellSort(array10K, size1);
	cout << "The time it took for shell sort to sort 10,000 items was " << timer.getTime() << endl;

	timer.startClock();//timing 100k
	shellSort(array100K, size2);
	cout << "The time it took for shell sort to sort 100,000 items was " << timer.getTime() << endl;

	timer.startClock();//timing 1 million
	shellSort(array1M, size3);
	cout << "The time it took for shell sort to sort 1,000,000 items was " << timer.getTime() << endl;
	cout << endl;

	delete[] array10K;
	delete[] array100K;
	delete[] array1M;
}
