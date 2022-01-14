#include <iostream>
#include <vector>
using namespace std;
int main(){
//	int n;
//	cin>>n;
//	vector<int>vrr(n);
//	for(int i=0;i<n;i++){
//		cin>>vrr[i];
//	}
//	vrr.push_back(3);
//	
//	for(int i=0;i<n;i++){
//		cout<<vrr[i]<<" ";
//	}
////	cout<<endl;
int n,m;
cin>>n>>m;
int key;
vector<vector<int>>vrr;
for(int i=0;i<n;i++){
	vector<int>temp;
	for(int j=0;j<m
	;j++){
		cin>>key;
		temp.push_back(key);
	}
	vrr.push_back(temp);
}
for(int i=0;i<vrr.size();i++){
	for(int j=0;j<vrr[i].size();j++){
		cout<<vrr[i][j]<<" ";
	}
	cout<<endl;
}
}
