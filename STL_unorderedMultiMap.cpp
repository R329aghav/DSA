#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
	unordered_multimap<int ,int>m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int key,value;
		cin>>key>>value;
		m.insert(make_pair(key,value));
	}
	cout<<"---------------";
	if(m.find(2)!=m.end()){
		cout<<" present"<<endl;
	}
	else{
		cout<<" not present";
	}
	for(auto it=m.begin();it!=m.end();it++){
		cout<<(*it).first<<" "<<(*it).second;
		cout<<endl;
	}
	return 0;
}
