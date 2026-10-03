#include<iostream>
using namespace std;
int main(){
	int arr[6]={1,1,1,3,3,6};
	int mode_elements[5];
	int mode_index=0;
	int frequency[5];
	for(int i=0;i<6;i++){
		int check=arr[i];
		bool already_done=false;
		for(int k=0;k<mode_index;k++){
			if(check==mode_elements[k]){
			already_done=true;
			break;
			}
		}
		if(already_done!=true){
			int count=0;
			for(int j=i;j<6;j++){
				if(check==arr[j]){
					count++;
				}
			}
			frequency[mode_index]=count;
			mode_elements[mode_index]=check;
			mode_index++;
		}
		}
		for(int i=0;i<mode_index;i++){
			cout<<"Frequency of Element "<<mode_elements[i]<<":"<<frequency[i]<<endl;
		}
	return 0;
}
