#include <iostream>
#include <queue>
using namespace std;
void printqueue(queue<int>qu){
	while(!qu.empty()){	
	cout<<qu.front()<<" ";
	qu.pop();
}
}
int main(){
//	queue<int>qu;
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		int key;
//		cin>>key;
//		qu.push(key);
//	}
//	cout<<qu.front()<<" ";
//	qu.pop();
//	cout<<qu.front()<<" ";
//	cout<<qu.size()<<" ";
//	cout<<endl;
queue<int>qu,qu1;
int n;
cin>>n;
for(int i=0;i<n;i++){
	int key;
	cin>>key;
	qu.push(key);
}
int m;
cin>>m;
for(int i=0;i<m;i++){
	int key;
	cin>>key;
	qu1.push(key);
}
cout<<"before swapping"<<" ";
cout<<qu.front()<<" ";
printqueue(qu);
cout<<qu1.front()<<" ";
printqueue(qu1);
cout<<"After Swapping"<<" ";
qu.swap(qu1);
cout<<qu.front()<<" ";
printqueue(qu);
cout<<qu1.front()<<" ";
printqueue(qu1);

cout<<endl;
}
