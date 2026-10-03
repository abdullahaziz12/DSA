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
    for(int i=0;i<len;i++){
        cout<<"Number at index "<<i<<" = "<<arr[i]<<endl;
    }
    return 0;
}