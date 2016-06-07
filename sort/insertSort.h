#ifndef INSERT_SORT_H
#define INSERT_SORT_H

#include "../cbase.h"

void insertSort(int *arr, int size);


void insertSort(int *arr, int size){
	int kval, i, j;
	for (i = 1; i < size; ++i) {
		kval = arr[i];
		j = i - 1;
		while(j >=0 && kval < arr[j]){//min to max
			arr[i] = arr[j];
			j--;
		}
		arr[j] = kval;
	}
	cout << "i=" << i << ";j=";
}





#endif
