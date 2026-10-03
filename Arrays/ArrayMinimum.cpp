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
     int mini=arr[0];
     int index=0;
    for(int i=1;i<len;i++){
        if(mini>arr[i]){
            mini=arr[i];
            index=i;
        }
    }
    cout<<"Minimum Number = "<<mini<<" at index "<<index;
    return 0;
}