// print fibonacci series using recursion

#include <iostream>
using namespace std;
int fibonacci(int n){
	if(n==0||n==1){
		return n;
	}
	else{
		return (fibonacci(n-1)+fibonacci(n-2));
	
	
}
int main(){
	int i=0,n;
	cin>>n;
	while(i<n){
		cout<< " "<<fibonacci(i);
	i++;	
	}
return 0;
}
