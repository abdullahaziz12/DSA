#include<iostream>
using namespace std;
class Stacks{
	int arr[5];
	int top_element=-1;
public:
	void push_element(int val){
		if(top_element==4){
			cout<<"Stack Overflow";
		}
		else{
			top_element++;
			arr[top_element]=val;
		}
	}
	void get_top(){
		cout<<arr[top_element];
	}
	void pop_element(){
		if(top_element<0){
			cout<<"Stack Underflow";
		}
		else{
			top_element--;
		}
	}
	bool isEmpty(){
		if(top_element<0){
			return true;
		}
		else{
			return false;
		}
	}
};
int main(){
	Stacks s;
	s.push_element(30);
	s.push_element(40);
	s.get_top();
	s.pop_element();
	s.get_top();
	return 0;
}
