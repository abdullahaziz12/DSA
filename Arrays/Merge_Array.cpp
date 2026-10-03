#include<iostream>
using namespace std;

int main(){

    int arr1[3] = {1,2,3};
    int arr2[3] = {4,5,6};
    int merged[6];

    for(int i=0;i<6;i++){
    	if(i<3){
    		merged[i]=arr1[i];
		}
		else if(i>=3){
			merged[i]=arr2[i-3];
		}
    	
	}
	for(int i=0;i<6;i++){
		cout<<merged[i]<<endl;
	}
    return 0;
}
