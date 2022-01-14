#include <iostream>
#include <vector>
using namespace std;
int main(){
//	int n;
//	vector<int>vrr(n);
//	int key;
////	int n;
////	cin>>n;
//	cout<<vrr.max_size()<<endl;
//	cout<<vrr.capacity()<<endl;
//	
//	for(int i=0;i<n;i++){
//		cin>>key;
//		vrr.push_back(key);
//	}
//	for(int i=0;i<n;i++){
//		cout<<vrr[i]<<" ";
//	}
//	cout<<vrr.front()<<" "<<vrr.back()<<endl;
//	int s_vrr=vrr.size();
//	for(int i=0;i<s_vrr;i++){
////		cout<<vrr[i]<<" ";
//cout<<vrr.at(i)<<" ";
//	}	
//	cout<<endl;
//swap function
//int n;
//cin>>n;
//vector<int>vrr(n),vrr1;
//
//for(int i=0;i<n;i++){
//	cin>>vrr[i];
//}
//vrr1.swap(vrr);
//cout<<"vrr=\n";
//for(int i=0;i<vrr.size();i++){
//	cout<<vrr[i]<<" ";
//}
//cout<<"Vrr1=\n";
//for(int i=0;i<n;i++){
//	cout<<vrr1[i]<<" ";
//}
//cout<<endl;
//clear function
//int n;
//cin>>n;
//vector<int>vrr(n),vrr1;
//for(int i=0;i<vrr.size();i++){
//	cin>>vrr[i];
//}
//vrr.clear();
//for(int i=0;i<vrr.size();i++){
//	cout<<vrr[i]<<" ";
//}
//cout<<endl;

//empty function
//int n;
//cin>>n;
//vector<int>vrr(n),vrr1;
//for(int i=0;i<n;i++){
//	cout<<vrr[i];
//}
//if(vrr.empty()){
//	cout<<"vrr is empty";
//}
//else{
//	cout<<"vrr is not empty";
//}
//return 0;
int n;
cin>>n;
vector<int>vrr(n);
for(int i=0;i<n;i++){
	cout<<vrr[i];
}
//begin(),end(),rbegin(),rend(),cbegin(),cend()
for(auto it=vrr.begin();it!=vrr.end();it++){
	cout<<*it<<" ";
	cout<<endl;
}
return 0;

}
