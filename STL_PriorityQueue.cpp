#include<iostream>
#include <queue>
using namespace std;
int main(){
//	priority_queue<int>pq;
priority_queue<int,vector<int>,greater<int>>pq;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int key;
		cin>>key;
		pq.push(key);
	}
//	cout<<pq.top()<<" ";
//	pq.pop();
//	cout<<pq.top()<<" ";
//	cout<<pq.size()<<" ";
//	if(pq.empty()){
//		cout<<"pq is empty"<<" ";
//	}
//		else{
//			cout<<" pq is not empty"<<" ";
//			
//		}
	
	
//	cout<<endl;

}
