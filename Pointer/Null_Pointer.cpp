#include<iostream>
using namespace std;
int main(){
	int*ptr=NULL ;
	cout<<ptr;
	//Error Cant Dereference Null Pointer
	cout<<*ptr;
	return 0;
}
