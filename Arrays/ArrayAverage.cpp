#include <iostream>
using namespace std;
int main() {
    int len;
    int total=0;
    int average=0;
    cout<<"Enter Length of Array:";
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++){
        cout<<"Enter Number:";
        cin>>arr[i];
    }
    cout<<"All Numbers Successfully added"<<endl;
    for(int i=0;i<len;i++){
        total+=arr[i];
    }
    cout<<"Sum of All numbers = "<<total<<endl;
    cout<<"Average = "<<total/len;
    return 0;
}