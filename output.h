#ifndef output_h
#define output_h
#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
void output(T num[], int length){
	if (num==nullptr||length<=0)
		throw invalid_argument("Pay attention to the input in output");

	for (int i=0; i!=length; ++i)
		cout<<num[i]<<" ";

	cout<<endl;
}
#endif
