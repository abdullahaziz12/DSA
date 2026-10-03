#include<iostream>
using namespace std;
int main(){
	int arr[6]={1,2,3,7,5,6};
	bool is_sort=true;
	for(int i=0;i<5;i++){
		if(arr[i]>arr[i+1]){
			is_sort=false;
			break;
		}
	}
	if(is_sort==true){
		cout<<"Array is Sorted ";
	}
	else{
		cout<<"Array is not Sorted";
	}
	return 0;
}
