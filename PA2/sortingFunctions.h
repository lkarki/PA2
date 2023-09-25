//Author: Lucius Karki
//Class : CSI 281-01
//Assignment : PA2 part 2
//Date Assigned : Monday, September 25, 2023
//Due Date : 13:00 EST, Thursday, September 28, 2023
//Description : Uses selection sort and shell sort in template functions to swap around
// arrays of all kinds of datatype
//Certification of Authenticity :
//I certify that this is entirely my own work, except where I have given
//fully - documented references to the work of others.I understand the definition and
//consequences of plagiarism and acknowledge that the assessor of this assignment
//may, for the purpose of assessing this assignment :
//	-Reproduce this assignment and provide a copy to another member of academic staff;
//and /or
//-Communicate a copy of this assignment to a plagiarism checking service(which may
//	then retain a copy of this assignment on its database for the purpose of future
//	plagiarism checking)
#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

const string DATA_FILE_10K = "10Kinput.txt";
const string DATA_FILE_100K = "100Kinput.txt";
const string DATA_FILE_1M = "1Minput.txt";

/*     Pre:  an array of unspecified datatype, size of array
*     Post:  None
*  Purpose:  To sort an array with bubble sort
*********************************************************/
template <typename T>void bubbleSort(T list[], int size) {
	bool swapped = true;
	int i;
	while (swapped == true) {
		swapped = false;
		for (i = 0; i < size-1; i++) {
			if (list[i + 1] < list[i]) {
				swap(list[i + 1], list[i]);
				swapped = true;
			}
		}
	}
}

/*     Pre:  an array of unspecified datatype, size of array
*     Post:  None
*  Purpose:  To sort an array with insertion sort
*********************************************************/
template <typename T>void insertionSort(T list[], int size) {
	int i, j;
	T value;
	for (i = 1; i < size; i++) {
		value = list[i];
		j = i - 1;
		while (j >= 0 && list[j] > value) {
			list[j + 1] = list[j];
			j = j - 1;
		}
		list[j + 1] = value;
	}
}

/*     Pre:  an array of unspecified datatype, size of array
*     Post:  None
*  Purpose:  To sort an array with selection sort
*********************************************************/
template <typename T>void selectionSort(T list[], int size) {
	int i, j, minIndex;
	for (i = 0; i < size-1; i++) {
		minIndex = i;
		for (j = i + 1; j < size; j++) {
			if (list[j] < list[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			swap(list[i], list[minIndex]);
		}
	}
}

/*     Pre:  an array of unspecified datatype, size of array
*     Post:  None
*  Purpose:  To sort an array with shell sort
*********************************************************/
template <typename T> void shellSort(T list[], int size) {
	int gap = size / 2;
	int i;
	while (gap > 0) {
		for (i = 0; i < size - gap; i++) {
			if (list[i] > list[i + gap]) {
				swap(list[i], list[(i + gap)]);
			}
		}
		gap /= 2;
	}
	bubbleSort(list, size);
}

/*     Pre:  an array of unspecified datatype, upper bound of the array, and lower bound of the array
*     Post:  None
*  Purpose:  To sort an array with quicksort
*********************************************************/
template <typename T> void quickSort(T list[], int lowerBound, int upperBound) {
	int i = lowerBound;
	int j = upperBound;

	T pivot = list[(lowerBound + upperBound) / 2];

	while (i <= j) {
		while (list[i] < pivot) {
			i = i + 1;
		}
		while (list[j] > pivot) {
			j = j - 1;
		}
		if (i <= j) {
			swap(list[i], list[j]);
			i = i + 1;
			j = j + 1;
		}
		if (lowerBound < j) {
			quickSort(list, lowerBound, j);
		}
		if (i < upperBound) {
			quickSort(list, i, upperBound);
		}
	}
}

/*     Pre:  an array of unspecified datatype, lowerbound of the array, upperbound of the array
*     Post:  None
*  Purpose:  To sort an array with merge sort
*********************************************************/
template <typename T> void mergeSort(T list[], int lowerBound, int upperBound) {
	if (lowerBound < upperBound) {
		int mid = (lowerBound + upperBound) / 2;
		mergeSort(list, lowerBound, mid);
		mergeSort(list, mid+1, upperBound);
		merge(list, lowerBound, mid, upperBound);
	}
}

/*     Pre:  an array of unspecified datatype, upperbound, lowerbound, and middle of what is passed in from mergesort
*     Post:  None
*  Purpose:  To do the work of the mergesort algorithm
*********************************************************/
template <typename T> void merge(T list[], int lowerBound, int mid, int upperBound) {
	int size1 = mid - lowerBound + 1;
	int size2 = upperBound - mid;
	int i, j, k;

	T* tmp1 = new T[size1];
	T* tmp2 = new T[size2];

	for (i = 0; i < size1; i++) {
		tmp1[i] = list[lowerBound + i - 1];
	}
	for (j = 0; j < size2; j++) {
		tmp2[j] = list[mid + j];
	}

	i = 1;
	j = i;

	for (k = lowerBound; k < upperBound && i < size1 && j < size2; k++) {
		if (tmp1[i] <= tmp2[j]) {
			list[k] = tmp1[i];
			i = i + 1;
		}
		else {
			list[k] = tmp2[j];
			j = j + 1;
		}
	}
	while (i < size1) {
		list[k] = tmp1[i];
		i = i + 1;
		k = k + 1;
	}
	while (j < size2) {
		list[k] = tmp2[j];
		j = j + 1;
		k = k + 1;
	}
}

/*     Pre:  memory location of two variables of unpecified datatype
*     Post:  None
*  Purpose:  To swap the two variables around
*********************************************************/
template <typename T>void swap(T &lhs, T &rhs) {
	T temp;
	temp = lhs;
	lhs = rhs;
	rhs = temp;
}

void runBubbleSort();
void runInsertionSort();
void runMergeSort();
void runQuickSort();
void runSelectionSort();
void runShellSort();
