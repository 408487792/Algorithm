#include "../cbase.h"
#include "insertSort.h"
#include "mergeSort.h"

int main(){
	string name("qqqannasdsdae");
	string::size_type pos = name.find("11anna");
	string::size_type pos1 = name.find_first_of("11anna");
	string::size_type pos2 = name.rfind("11anna");
	string::size_type pos3 = name.find_first_not_of("11anna");
	string::size_type pos4 = name.find_last_of("11anna");
	string::size_type pos5 = name.find_last_not_of("11anna");

	if(pos == string::npos)
		cout << "no pos!=" << pos << endl;
	else cout << "pos = " << pos << endl;
	return 0;

	int arr[] = {7,4,1,25,5,8,9,6,3,2};
	print_a(arr, arr+10);
	//insertSort(arr, 10);
	//mergeSort(arr, 0, 9);
	print_a(arr, arr+10);
	return 0;
}
