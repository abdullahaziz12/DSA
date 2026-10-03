#include<iostream>
using namespace std;
int binarySearch(int arr[ ],int size,int tar){
	int st=0;
	int end=size-1;
	while(st<=end){
		int mid=st+(end-st)/2;
		if(tar>arr[mid]){
			st=mid+1;
		}
		else if(tar<arr[mid]){
			end=mid-1;
		}
		else{
			return mid;
		}
	}
	cout<<"Not Found";
}
int main(){
	int arr[5]={1,2,3,4,5};
	cout<<binarySearch(arr,5,3);
	return 0;
}
