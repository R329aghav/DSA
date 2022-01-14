#include <iostream>
#include <list>
using namespace std;
bool even(int x){
	return (x%2==0);
}
int main(){
//	int n;
//	cin>>n;
//	list<int>l1,l2;
//	l1.push_back(1);
//	l1.push_back(2);
//	l1.push_back(3);
//	l1.push_back(4);
//	for(int i=0;i<n;i++){
//		int key;
//		cin>>key;
//		if(key & 1)
//		l1.push_back(key);
//		else
//		l1.push_front(key);
//	}
//	cout<<" L1 "<<endl;
//	for(auto it=l1.begin();it!=l1.end();it++){
//		cout<<*it<<" ";
//		
//	}
//	cout<<endl;
//	cout<<" L2 "<<endl;
//		for(auto it=l2.begin();it!=l2.end();it++){
//		cout<<*it<<" ";
//		
//	}
//	cout<<endl;
//	l1.swap(l2);
//	cout<<l1.size()<<endl;
//		for(auto it=l1.begin();it!=l1.end();it++){
//		cout<<*it<<" ";
//		
//	}
//	cout<<endl;
//	return 0;
//	
	int n,m;
	cin>>n>>m;
	list<int>l1,l2;
//	l2.push_back(1);
//	l2.push_back(3);
//	l2.push_back(5);
//	l2.push_back(7);
	for(int i=0;i<n;i++)
	{
		int key;
		cin>>key;
		l1.push_back(key);
	}
		for(int i=0;i<m;i++)
	{
		int key;
		cin>>key;
		l2.push_back(key);
	}
	cout<<" L1 "<<endl;
	for(auto it=l1.begin();it!=l1.end();it++){
		cout<<*it<<" ";
		
	}
	cout<<endl;
	cout<<" L2 "<<endl;
	for(auto it=l2.begin();it!=l1.end();it++){
		cout<<*it<<" ";
		}
		cout<<endl;
//		l1.merge(l2);
//		for(auto it=l1.begin();it!=l1.end();it++){
//			cout<<*it<<" ";
//		
//		}
//	cout<<endl;
//	cout<<" L2 "<<endl;
//	for(auto it=l2.begin();it!=l2.end();it++){
//			cout<<*it<<" ";
//		
//		}
//	cout<<endl;
	
}
