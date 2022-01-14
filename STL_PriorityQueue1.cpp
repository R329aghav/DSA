#include <iostream>
#include <queue>
//void pqueue(priority_queue<int>pq){
//	while(!pq.empty()){
//		cout<<pq.top<<" ";
//		pq.pop();
//	}
//}
using namespace std;
int main(){
	priority_queue<int>pq,pq1;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int key;
		cin>>key;
		pq.push(key);
		
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int key1;
		cin>>key1;
		pq1.push(key1);
		
	}
	cout<<" before swaping"<<" ";
	cout<<pq.top()<<" ";
//	printpqueue(pq);
	cout<<pq1.top()<<" ";
//	printpqueue(pq1);
	cout<<" after swapping"<<" ";
	pq.swap(pq1);
		cout<<pq.top()<<" ";
//	printpqueue(pq);

	cout<<pq1.top()<<" ";
//	printpqueue(pq1);
	
	cout<<endl;
	
}
