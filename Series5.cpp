#include <iostream>
#include <bits/stdc++.h>
/*
1 +3 +9 +27 +81 -----
*/
using namespace std;
int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<pow(3,i);
		if(n==i)
		cout<<" ";
		else 
		cout<<" +";
	}
	return 0;
}
