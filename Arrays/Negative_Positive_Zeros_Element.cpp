#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,-20,-30,23,0};
	int positive=0;
	int negative=0;
	int zeros=0;
	for(int i=0;i<5;i++){
		if(arr[i]>0){
			positive++;
		}
		else if(arr[i]<0){
			negative++;
		}
		else if(arr[i]==0){
			zeros++;
		}
	}
	cout<<"Negative Numbers:"<<negative<<endl;
	cout<<"Positive Numbers:"<<positive<<endl;
	cout<<"Zero Numbers:"<<zeros<<endl;
	return 0;
}
