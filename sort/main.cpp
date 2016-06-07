#include "insertSort.h"

int main(){
	int arr[] = {7,4,1,25,5,8,9,6,3,2};
	print_a(arr, arr+10);
	insertSort(arr, 10);
	/*print_a(arr, arr+10);
	return 0;*/
}
