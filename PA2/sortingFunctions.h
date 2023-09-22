#pragma once
#include <iostream>
#include <string>

using namespace std;

template <typename T>void bubbleSort(T list[], int size) {
	bool swapped = true;
	int i;
	while (swapped == true) {
		swapped = false;
		for (i = 0; i < size; i++) {
			if (list[i + 1] < list[i]) {
				swap(list[i + 1], list[i]);
				swapped = true;
			}
		}
	}
}

template <typename T>void insertionSort(T list[], int size) {
	int i, j;
	T value;
	for (i = 1; i < size; i++) {
		value = list[i];
		j = i - 1;
		while (j >= 1 && list[j] > value) {
			list[j + 1] = list[j];
			j = j - 1;
		}
		list[j + 1] = value;
	}
}

template <typename T>void SelectionSort(T list[], int size) {
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

template <typename T> void ShellSort(T list[], int size) {
	int gap = size / 2;
	int i;
	while (gap > 0) {
		for (i = 0; i < size - gap; i++) {
			if (list[i] > list[i + gap]) {
				swap(list[i],list[i+gap])
			}
		}
		gap / 2;
	}
	bubbleSort[list, size];
}

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

template <typename T> void mergeSort(T list[], int lowerBound, int upperBound) {
	if (lowerBound < upperBound) {
		int mid = (lowerBound + upperBound) / 2;
		mergeSort(list, lowerBound, mid);
		mergeSort(list, mid+1, upperBound);
		merge(list, lowerBound, mid, upperBound);
	}
}

template <typename T> void merge(T list[], int lowerBound, int mid, int upperBound) {
	int size1 = mid - lowerBound + 1;
	int size2 = upperBound - mid;
	int i, j, k;

	T* tmp1 = new T[size1];
	T* tmp2 = new T[size2];

	for (i = 0; i < size1, i++) {
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

template <typename T>void swap(T &lhs, T &rhs) {
	T temp;
	temp = lhs;
	lhs = rhs;
	rhs = temp;
}