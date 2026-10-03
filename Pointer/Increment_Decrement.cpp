#include<iostream>
using namespace std;
int main(){
	int a=100;
	int*ptr=&a;
	cout<<"Original Value"<<ptr<<endl;
	ptr++;
	cout<<"After Incremenr"<<ptr<<endl;
	ptr--;
	cout<<"After Decrement"<<ptr<<endl;
	return 0;
}
