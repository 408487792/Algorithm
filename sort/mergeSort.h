#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include "../cbase.h"

void merge(int *arr, int st_ind, int mid_ind, int end_ind){
	int i, j, k;
	int l_cnt = mid_ind - st_ind + 1;//todo +1
	int r_cnt = end_ind - mid_ind;
	int *L = new int(l_cnt);//int *L = (int *)malloc(l_cnt*sizeof(int));
	int *R = new int(r_cnt);//int *R = (int *)malloc(r_cnt*sizeof(int));
	for (i = 0; i < l_cnt; ++i) {
		L[i] = arr[st_ind + i];
	}
	for (j = 0; j < r_cnt; ++j) {
		R[j] = arr[mid_ind + j];
	}
	cout << "cnt:" << end_ind - st_ind << endl;
	cout << "L:" << l_cnt << endl;
	print_a(L, L+l_cnt);
	cout << "R:" << r_cnt << endl;
	print_a(R, R+r_cnt);
	i = j = 0;
	for (k = st_ind; k <= end_ind; ++k) {
		if (i < l_cnt && L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
	}
	delete [] L;
	delete [] R;
}

void mergeSort(int *arr, int st_ind, int end_ind){
	if (st_ind < end_ind) {
		int mid_ind = st_ind + ((end_ind - st_ind) >> 1);
		mergeSort(arr, st_ind, mid_ind);
		mergeSort(arr, mid_ind + 1, end_ind);
		merge(arr, st_ind, mid_ind, end_ind);
	}
}

#endif
