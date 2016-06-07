#ifndef INSERT_SORT_H
#define INSERT_SORT_H

void insertSort(int *arr, int size){
	int kval, i, j;
	for (i = 1; i < size; ++i) {
		kval = arr[i];
		j = i - 1;
		while(j >= 0 && kval < arr[j]){//min to max
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = kval;
	}
}

#endif
