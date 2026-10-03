#include<iostream>
#include<vector>
using namespace std;
class Stacks{
	vector<int>v;
public:
	void push_element(int val){
		v.push_back(val);
	}
	void toped_element(){
		cout<<v[v.size()-1];
		
	}
	void pop_element(){
		v.pop_back();
		
	}
	bool isEmpty(){
		if (v.size()>0){
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
