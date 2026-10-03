#include <iostream>
using namespace std;
int main() {
    int arr[10] = {64, 25, 12, 22, 11};
    int num,pos;
    cout<<"Enter Number you want to Insert:";
    cin>>num;
    cout<<"At Position you want to Insert From 0 to 4:";
    cin>>pos;
    int size=5;
    for(int i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" at index "<<i<<endl;
    }
    return 0;
}