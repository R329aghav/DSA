// print first odd n natural numbers using recursion

#include <iostream>
using namespace std;
void odd(int i,int n){
	if(i<=n)
	{
	cout<<2*i+1<<endl;
	odd(i+1,n);
	}


}
int main(){
	int n,i;
	cin>>n;
	odd(i+1,n);
}
