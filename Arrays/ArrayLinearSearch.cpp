#include <iostream>
using namespace std;
int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    int size=5;
    int Val;
    int index;
    cout<<"Enter Number You want to Search:";
    cin>>Val;
    bool found=false;
    for(int i=0;i<size;i++){
        if(arr[i]==Val){
            found=true;
            index=i;
            break;
        }
    }
    if(found==true){
        cout<<"Number Found at Index "<<index;
    }
    else{
        cout<<"Number Not Found";
    }
    return 0;
}