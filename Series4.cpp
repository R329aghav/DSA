#include <iostream>
/*
1 + 4 + 27 + 256 + 3125
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
//	cout<<"1 +";
	for(i=1;i<=n;i++){
		cout<<pow(i,i);
		if(i==n)
		cout<<" ";
		else
		cout<<" + ";
	}
	return 0;
}
