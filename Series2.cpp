#include <iostream>
/*
1 + 1/2 +  1/4 +  1/8 +  1/16 +  1/32------
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	cout<<"1 +";
	for(i=1;i<=n;i++){
		cout<<" 1/"<<pow(2,i);
		if(i==n)
		cout<<" ";
		else
		cout<<" + ";
	}
	return 0;
}
