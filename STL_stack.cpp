#include <iostream>
#include <stack>
using namespace std;
void printstack(stack<int>st){
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}
int main(){
	stack<int>st;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int key;
		cin>>key;
		st.push(key);
	}
//	stack<int>st,st1;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	st.push(4);
////	cout<<st.top()<<" ";
////	st.pop();
////	cout<<st.top()<<" ";
//
//	st1.push(5);
//	st1.push(6);
//	st1.push(7);
//	st1.push(8);
//	cout<<" before swapping"<<" ";
//	
	cout<<st.top()<<endl;
	printstack(st);
//	cout<<st1.top()<<endl;
//	printstack(st1);
//	
//	
//	cout<<" After swapping"<<endl;
//	st1.swap(st);
//	
//	cout<<st.top()<<endl;
//	printstack(st);
//	cout<<st1.top()<<endl;
//	printstack(st1);
//	
}
