#include <iostream>
#include <list>
using namespace std;
bool even(int x){
	return (x%2==0);
}
int main(){
int n;
cin>>n;
list<int>l1;

for(int i=0;i<n;i++){
	int key;
	cin>>key;
	if(key & 1)
	l1.push_back(key);
	else
	l1.push_front(key);
}
//cout<<l1.front()<<" "<<l1.back()<<endl;
//l1.pop_back();
//l1.pop_front();
//cout<<"before removing"<<" ";
//cout<<"before reversing"<<" ";
//cout<<l1.size()<<" ";
for(auto it=l1.begin();it!=l1.end();it++){
	cout<<*it<<" ";
	cout<<endl;
}
//l1.remove(2);
//cout<<"after removing"<<" ";
//l1.remove_if(even);
//cout<<"after reversing"<<" ";
//l1.reverse();
//cout<<"after clear"<<" ";
//l1.clear();
//cout<<l1.size()<<" ";
for(auto it=l1.begin();it!=l1.end();it++){
	cout<<*it<<" ";
	cout<<endl;
}
return 0;	
}
