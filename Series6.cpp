#include <iostream>
/*
 1 /1 +  1 /4 +  1 /27 +  1 /256 +  1 /3125-----
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
//	cout<<"1 +";
	for(i=1;i<=n;i++){
		cout<<" 1 /"<<pow(i,i);
		if(i==n)
		cout<<" ";
		else
		cout<<" + ";
	}
	return 0;
}
