// tower of hanoi problem

#include <iostream>
using namespace std;
void tower(int n,char a,char aux,char b){
	if(n==1){
		cout<<"move disk"<<n<<"from"<<a<<"to"<<b<<endl;
		return ;
	}
	tower(n-1,a,b,aux);
	cout<<"move disk"<<n<<"from"<<a<<"to"<<b<<endl;
	tower(n-1,aux,a,b);
}
int main(){
	int n;
	cin>>n;
	tower(n,'A','B','C');
	return 0;
}
