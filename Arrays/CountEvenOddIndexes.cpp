#include <iostream>
using namespace std;
int main() {
  int arr[6]={1,2,3,4,5,6};
    int even_array[6];
    int odd_array[6];
    int even_index=0;
    int odd_index=0;
    for(int i=0;i<6;i++){
           if(arr[i]%2==0){
               even_array[even_index]=i;
               even_index++;
           }
            else{
                odd_array[odd_index]=i;
               odd_index++;
            }
        }
    cout<<"Even Numbers"<<endl;
    for(int i=0;i<even_index;i++){
        cout<<"Number "<<arr[even_array[i]]<<" at index "<<even_array[i]<<endl;
    }
    cout<<"\nODD Numbers"<<endl;
    for(int i=0;i<odd_index;i++){
       cout<<"Number "<<arr[i]<<" at index "<<odd_array[i]<<endl;
    }
    return 0;
}