#include <iostream>
#include <deque>
using namespace std;
int main(){
	int n;
	cin>>n;
	deque<int>dq,dq2;
	dq2.push_back(1);
	dq2.push_back(2);
	dq2.push_back(3);
	dq2.push_back(4);
	
	for(int i=0;i<n;i++){
		int key;
		cin>>key;
//		dq.push_front(key);
		dq.push_back(key);
	}
//	dq.pop_back();
//	dq.pop_front();
//	cout<<dq.front()<<" "<<dq.back()<<endl;
//dq.clear();
//cout<<dq.size()<<" ";
cout<<" before swaaping"<<" ";
cout<<" dq "<<endl;
	for(auto it=dq.begin();it!=dq.end();it++){
		cout<<*it<<" ";
		
	}
	cout<<endl;
	cout<<" dq2 "<<" ";
	for(auto it=dq2.begin();it!=dq2.end();it++){
		cout<<*it<<" ";
		
	}
	cout<<endl;
	dq2.swap(dq);
	cout<<" after swapping"<<" ";
	cout<<" dq "<<" ";
	for(auto it=dq.begin();it!=dq.end();it++){
		cout<<*it<<" ";
		
	}
	cout<<endl;
	cout<<" dq2"<<" ";
	for(auto it=dq2.begin();it!=dq2.end();it++){
		cout<<*it<<" ";
		
	}
	cout<<endl;
}
