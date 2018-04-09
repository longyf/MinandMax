#ifndef minmax_h
#define minmax_h
#include <iostream>
#include <stdexcept>
using namespace std;
template <class T>
void minmax(T num[], int length, int &indexofMax, int &indexofMin) {

	if (num==nullptr||length<=0)
		throw invalid_argument("Pay attention to the input array in minmax");

	int begin=0;
	//奇数个元素，默认把第0个元素当成最大和最小的。
	if (length%2==1) {
		indexofMax=indexofMin=0;
		begin=1;
	}
	//偶数个元素，先比较num[0]和num[1]。
	else {
		if (num[0]<num[1]) {
			indexofMax=1;
			indexofMin=0;
		}
		else {
			indexofMax=0;
			indexofMin=1;
		}
		begin=2;
	}
	for (int i=begin; i!=length; i+=2) {
		if (num[i]<num[i+1]) {
			if (num[indexofMax]<num[i+1]) indexofMax=i+1;
			if (num[indexofMin]>num[i]) indexofMin=i;
		}
		else {
			if (num[indexofMax]<num[i]) indexofMax=i;
			if (num[indexofMin]>num[i+1]) indexofMin=i+1;
		}
	}
}
#endif
