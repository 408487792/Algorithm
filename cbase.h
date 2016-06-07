#ifndef CBASE_H
#define CBASE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class elemType>
void print_a(elemType *pbegin, elemType *pend)
{
	while (pbegin != pend) {
		cout << *pbegin << " ";
		pbegin++;
	}
	cout << endl;
}

void print_vt(vector <string> vt)
{
	if(vt.empty()){
		cout << "is empty" << endl;
	}
	for (vector<string>::iterator it = vt.begin(); it != vt.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}







#endif
