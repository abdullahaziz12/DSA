#include<iostream>
using namespace std;
int main(){
	int arr[5]={10,20,30,23,5};
	int largest=arr[0];
	int second_largest=0;
	for(int i=0;i<5;i++){
		if(arr[i]>largest){
			second_largest=largest;
			largest=arr[i];
		}
		else if(arr[i]>second_largest){
			second_largest=arr[i];
		}
	}
	cout<<second_largest;
}
