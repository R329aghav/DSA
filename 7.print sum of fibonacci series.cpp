// print sum of fibonacci series

#include <iostream>
using namespace std;
int fibonacci(int n){
	
	if(n==0||n==1){
		return n;
	}
	else{
		return (fibonacci(n-1)+fibonacci(n-2));
}
}
int main(){
	int i,n;
    int sum=0;
	cin>>n;
for(i=0;i<n;i++){
	sum=sum+fibonacci(i);
}
return 0;
}
