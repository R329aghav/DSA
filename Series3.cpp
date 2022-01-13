#include <iostream>
/*
1 +2 + 4 + 8 + 16 + 32-------
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	cout<<"1 +";
	for(i=1;i<=n;i++){
		cout<<"1/"<<pow(2,i);
		if(i==n)
		cout<<" ";
		else
		cout<<" + ";
	}
	return 0;
}
