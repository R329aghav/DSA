// print first prime n natural numbers using recursion

#include <iostream>
using namespace std;
int  prime(int i,int n){
	if(n==i)
	return 0;
	else if(n%2==0)
	return 1;
	else{
		return prime(i+1,n);
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(prime(2,i)==0)
		cout<<i<<" ";
	}
}
