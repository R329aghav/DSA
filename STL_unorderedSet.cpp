#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
	unordered_multiset<int>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int key;
		cin>>key;
		s.insert(key);
	}
	cout<<" unordered multiset"<<endl;
	for(auto it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
		cout<<endl;
	}
	cout<<endl;
}
