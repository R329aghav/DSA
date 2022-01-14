#include <iostream>
#include <queue>
//struct compare{
//	int a,b;
//	bool operator()(pair<int ,int>a,pair<int,int>b){
//		return a.second<b.second;
//	}
//};
using namespace std;
int main(){
	priority_queue<pair<int ,int>,vector<pair<int,int>>>pq;
	pq.push(make_pair(30,20));
	pq.push(make_pair(20,30));
	cout<<pq.top().first<<endl;
	pq.pop();
	cout<<pq.top().first<<endl;
	
}
