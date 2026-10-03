#include<iostream>
using namespace std;
int main(){
	int arr[5]={10,20,30,23,5};
	int smallest=arr[0];
	int second_smallest=0;
	for(int i=0;i<5;i++){
		if(arr[i]<smallest){
			cout<<second_smallest<<endl;
			second_smallest=smallest;
			cout<<second_smallest<<endl;
			smallest=arr[i];
			cout<<smallest;
		}
		else if(arr[i]<second_smallest){
			second_smallest=arr[i];
		}
	}
	return 0;
}
