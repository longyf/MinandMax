#include "MinandMax.h"
#include "minmax.h"
#include "output.h"
#include <iostream>
using namespace std;
void test1() {
    const int length=16;
    int a[length]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int indexofMax=0;
    int indexofMin=0;
    minmax(a,length,indexofMax,indexofMin);
	cout<<"The input array is: "<<endl;
	output(a,length);
    cout<<"indexofMax="<<indexofMax<<endl;
    cout<<"indexofMin="<<indexofMin<<endl;
}

void test2() {
    const int length=16;
    int a[length]={14,15,16,11,11,13,1,2,2,4,5,6,7,8,9,10};
    int indexofMax=0;
    int indexofMin=0;
    minmax(a,length,indexofMax,indexofMin);
    cout<<"The input array is: "<<endl;
    output(a,length);
    cout<<"indexofMax="<<indexofMax<<endl;
    cout<<"indexofMin="<<indexofMin<<endl;
}

void test3() {
    const int length=16;
    int a[length]={14,15,16,11,11,1,1,2,2,4,5,6,7,8,9,10};
    int indexofMax=0;
    int indexofMin=0;
    minmax(a,length,indexofMax,indexofMin);
    cout<<"The input array is: "<<endl;
    output(a,length);
    cout<<"indexofMax="<<indexofMax<<endl;
    cout<<"indexofMin="<<indexofMin<<endl;
}

void test4() {
    const int length=16;
    int a[length]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int indexofMax=0;
    int indexofMin=0;
    minmax(a,length,indexofMax,indexofMin);
    cout<<"The input array is: "<<endl;
    output(a,length);
    cout<<"indexofMax="<<indexofMax<<endl;
    cout<<"indexofMin="<<indexofMin<<endl;
}

void test5() {
    const int length=1;
    int a[length]={1};
    int indexofMax=0;
    int indexofMin=0;
    minmax(a,length,indexofMax,indexofMin);
    cout<<"The input array is: "<<endl;
    output(a,length);
    cout<<"indexofMax="<<indexofMax<<endl;
    cout<<"indexofMin="<<indexofMin<<endl;
}

void test6() {
    const int length=16;
    int *a=nullptr;
    int indexofMax=0;
    int indexofMin=0;
    minmax(a,length,indexofMax,indexofMin);
    cout<<"The input array is: "<<endl;
    output(a,length);
    cout<<"indexofMax="<<indexofMax<<endl;
    cout<<"indexofMin="<<indexofMin<<endl;
}

int main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	return 0;
}
