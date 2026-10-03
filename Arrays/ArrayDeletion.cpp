#include <iostream>
using namespace std;
int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    int size=5;
    int pos;
    cout<<"Enter Index of Number You want to Remove:";
    cin>>pos;
    for(int i=pos;i<size;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<"  "<<i<<endl;
    }
    return 0;
}