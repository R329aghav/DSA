#include <iostream>
#include <set>
using namespace std;
int main(){
	set<int>s;
	int n;
	cin>>n;
//	set use insert function
	for(int i=0;i<n;i++){
		int key;
		cin>>key;
		s.insert(key);
	}
//	find function--search the element
if(s.find(2)!=s.end()){
	cout<<" 2 found in the set"<<" ";
}
	else{
		cout<<" 2 not found i the set"<<" ";
	}
s.erase(s.find(1),s.find(4));
	for(auto it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
		cout<<endl;
	}
	return 0;
}
