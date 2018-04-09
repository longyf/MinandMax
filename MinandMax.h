#ifndef min_and_max_h
#define min_and_max_h
#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
bool MinandMax(T a[], int n, int &indexofMin, int &indexofMax) {
	if (a==nullptr||n<=0) 
		throw invalid_argument("Pay attention to the input in MinandMax");

	if (n==1) {
		indexofMin=indexofMax=0;
		return true;
	}

	int s=1;
	if (n%2==1)
		indexofMax=indexofMin=0;
	else {
		if (a[0]>a[1]) {
			indexofMin=1;
			indexofMax=0;
		}
		else {
			indexofMin=0;
			indexofMax=1;
		}
		s=2;
	}

	for (int i=s; i<n; i+=2) {
		
		if (a[i]>a[i+1]) {
			if (a[i]>a[indexofMax])	indexofMax=i;
			if (a[i+1]<a[indexofMin]) indexofMin=i+1;
		}

		else {
			if (a[i+1]>a[indexofMax]) indexofMax=i+1;
			if (a[i]<a[indexofMin]) indexofMin=i;
		}
		cout<<indexofMax<<" "<<indexofMin<<endl;
	}
	return true;
}
#endif
