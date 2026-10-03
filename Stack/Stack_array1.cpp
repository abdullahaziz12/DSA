#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int top_element=-1;
    top_element++;
    arr[top_element]=5;
    top_element++;
    arr[top_element]=6;
    top_element++;
    arr[top_element]=7;
    cout<<arr[top_element];
    top_element--;
    cout<<arr[top_element];
    top_element--;
    cout<<arr[top_element];
    return 0;
}
