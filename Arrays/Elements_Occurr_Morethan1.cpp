#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,5,1,1,5};
	int mode_elements[5];
	int mode_index=0;
	for(int i=0;i<5;i++){
		int check=arr[i];
		bool occur=false;
		for(int j=i+1;j<5;j++){
			if(check==arr[j]){
				occur=true;
				break;
			}
		}
		if(occur==true){
			bool is_already_added=false;
			for(int i=0;i<mode_index;i++){
				if(check==mode_elements[i]){
					is_already_added=true;
					break;
				}
			}
			if(is_already_added==false){
				mode_elements[mode_index]=check;
				mode_index++;
			}
		}
	}
	for(int i=0;i<mode_index;i++){
		cout<<mode_elements[i]<<endl;
	}
	return 0;
}
