#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int a=100;
	cout<<arr<<endl;//Array is a pointer
	cout<<*arr;//Always point to index 0
//	Error!Because Array is a Constant Pointer
//	arr=&a;
	return 0;
}
