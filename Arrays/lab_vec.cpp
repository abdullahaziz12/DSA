#include<iostream>
#include<vector>
using namespace std;
class Stacks{
	vector<int>v;
public:
	void push_element(int val){
		v.push_back(val);
	}
	void get_top(){
		cout<<v[v.size()-1];
	}
	void pop_element(){
		v.pop_back();
	}
	bool isEmpty(){
		if(v.size()>0){
			return false;
		}
		else{
			return true;
		}
	}
};
int main(){
	Stacks s;
	s.push_element(40);
	s.push_element(30);
	s.push_element(50);
	s.get_top();
	s.pop_element();
	cout<<endl;
	s.get_top();
	s.pop_element();
	cout<<endl;
	s.get_top();
	s.pop_element();
	cout<<endl;
	return 0;
}
