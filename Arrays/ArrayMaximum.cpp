#include <iostream>
using namespace std;
int main() {
    int len;
    cout<<"Enter Length of Array:";
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++){
        cout<<"Enter Number:";
        cin>>arr[i];
    }
    cout<<"All Numbers Successfully added"<<endl;
     int max=arr[0];
     int index=0;
    for(int i=1;i<len;i++){
        if(max<arr[i]){
            max=arr[i];
            index=i;
        }
    }
    cout<<"Maximum Number = "<<max<<" at index "<<index;
    return 0;
}