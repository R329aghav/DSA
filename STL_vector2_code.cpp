#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>vrr(n);
	for(int i=0;i<n;i++){
		cin>>vrr[i];
	}
	cout<<"first"<<endl;
	for(auto it=vrr.begin();it!=vrr.end();it++){
		cout<<*it<<" ";
		cout<<endl;
	}
	cout<<"second"<<endl;
//	reverse 
    for(auto it=vrr.rbegin();it!=vrr.rend();it++){
		cout<<*it<<" ";
		cout<<endl;
	}
	cout<<"third"<<endl;
	
	 for(auto it=vrr.cbegin();it!=vrr.cend();it++){
		cout<<*it<<" ";
		cout<<endl;
	}
	cout<<"fourth"<<endl;
	////begin(),end(),rbegin(),rend(),cbegin(),cend()
	for(int i=0;i<n;i++){
		cout<<vrr[i];
	}
	return 0;
}
