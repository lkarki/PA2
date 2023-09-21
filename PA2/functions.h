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

template <typename T>void swap(T &lhs, T &rhs) {
	T temp;
	temp = lhs;
	lhs = rhs;
	rhs = temp;
}