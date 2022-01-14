#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;
bool negative(int x){
	return x<0;
}
bool positive(int x){
return x>0;
}
void print(int x){
	cout<<x<<" ";
}
int main(){
	vector<int>vrr,vrr1(10);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int key;
		cin>>key;
		vrr.push_back(key);
	}
	cout<<" before sorting"<<endl;
	for(auto it=vrr.begin();it!=vrr.end();it++){
		cout<<*it<<" ";
		cout<<endl;
	}
	cout<<"After sorting"<<endl;
	sort(vrr.begin(),vrr.end());
	for(auto it=vrr.begin();it!=vrr.end();it++){
		cout<<*it<<" ";
		cout<<endl;
	}
	cout<<"----------------"<<endl;
	reverse(vrr.begin(),vrr.end());
//	for(auto it=vrr.begin();it!=vrr.end();it++){
//		cout<<*it<<" ";
//		cout<<endl;
//	}
	for_each(vrr.begin(),vrr.end(),print);
	cout<<*max_element(vrr.begin(),vrr.end())<<endl;
	cout<<*min_element(vrr.begin(),vrr.end())<<endl;
	cout<<*find(vrr.begin(),vrr.end(),3)<<endl;
	cout<<find(vrr.begin(),vrr.end(),3)-vrr.begin()<<endl;
	cout<<accumulate(vrr.begin(),vrr.end(),0)<<endl;
	cout<<count(vrr.begin(),vrr.end(),3)<<endl;
	if(binary_search(vrr.begin(),vrr.end(),3)){
		cout<<" 3 exist\n";
	}
	else{
		cout<<"3 does not exist\n";
	}
	auto itlb=lower_bound(vrr.begin(),vrr.end(),3);
	auto itub=upper_bound(vrr.begin(),vrr.end(),3);
	cout<<itlb-vrr.begin()<<" "<<itub-vrr.begin()<<endl;
	next_permutation(vrr.begin(),vrr.end());
	for_each(vrr.begin(),vrr.end(),print);
	cout<<endl;
	prev_permutation(vrr.begin(),vrr.end());
	for_each(vrr.begin(),vrr.end(),print);
	cout<<endl;
//	all_of,any_of,none_of
if(all_of(vrr.begin(),vrr.end(),positive)){
	cout<<" all are positive"<<endl;
}
else{
	cout<<" all are not positive"<<endl;
}
if(any_of(vrr.begin(),vrr.end(),negative)){
	cout<<" all are negative"<<endl;
}
else{
	cout<<" all are not negative"<<endl;
}
if(none_of(vrr.begin(),vrr.end(),negative)){
	cout<<" all are negative"<<endl;
}
else{
	cout<<" at leat  one negative"<<endl;
}

iota(vrr1.begin(),vrr1.end(),5);
for_each(vrr.begin(),vrr.end(),print);
	cout<<endl;
	
	return 0;
}
