#include<iostream>
using namespace std;
class Stacks{
	int arr[5];
	int top_element=-1;
public:
	void push_element(int val){
		if(top_element==4){
			cout<<"Stack is Overflowed";
		}
		else{
			top_element++;
			arr[top_element]=val;
		}
	}
	void toped_element(){
		if(top_element<0){
			cout<<"Stack is Underflow";
		}
		else{
			cout<<arr[top_element];
		}
		
	}
	void pop_element(){
		if(top_element<0){
			cout<<"Stack is underflow";
		}
		else{
			top_element--;
		}
		
	}
	bool isEmpty(){
		if (top_element>-1){
			return false;
		}
		else{
			return true;
		}
	}
};
int main(){
    Stacks s;
    s.push_element(20);
    s.push_element(30);
    s.push_element(40);
//    s.toped_element();
//    s.pop_element();
//    s.toped_element();
//    s.pop_element();
//    s.toped_element();
//    s.pop_element();
//    s.pop_element();
while(!s.isEmpty()){
	s.toped_element();
	cout<<" ";
	s.pop_element();
}
    return 0;
}
