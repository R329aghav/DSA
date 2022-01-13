#include <iostream>
using namespace std;
int sum(int n){
	int sum=0,i,j;
	for(i=1;i<n;i++){
		sum=sum+i;
		cout<<i<<"";
		if(i==n){
			cout<<" ";
		}
		else{
			cout<<"+";
		}
	}
}
int main(){
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<sum(i)<<" ";
	}
	return 0;
}
