#ifndef INSERT_SORT_H
#define INSERT_SORT_H

#include "../cbase.h"

void insertSort(int *arr, int size);


void insertSort(int *arr, int size){
	int kval, i, j;
	for (i = 1; i < size; ++i) {
		kval = arr[i];
		j = i - 1;
		while(j > 0 && kval < arr[j]){//min to max
			arr[j+1] = arr[j];
			j--;
		}
		arr[j] = kval;
		cout << "j = " << j << endl;
	}
	print_a(arr, arr + 10);
	cout << "i=" << i << ";j=" << j << endl;
}





#endif
