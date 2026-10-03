// Accending Order
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    int size=5;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

//Decending Order
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    int size=5;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}