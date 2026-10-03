#include<iostream>
using namespace std;
void Change_Val(int *ptr){
	*ptr=200;
}
int main(){
	int a=100;
	int*ptr=&a;
	cout<<"Before Change in Function:"<<a<<endl;
	Change_Val(ptr);
	cout<<"After Change in Function:"<<a;
	return 0;
}
