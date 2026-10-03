#include <iostream>
using namespace std;
int main() {
  int arr[5] = {10, 20, 30, 40, 50};
    int left=0;
    int rigth=4;
    while(left<rigth){
        int temp=arr[left];
        arr[left]=arr[rigth];
        arr[rigth]=temp;
        left++;
        rigth--;
    }
    cout<<"Reveresed Array"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}