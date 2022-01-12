// print n natural numbers using recursion

#include <iostream>
using namespace std;
void natural(int n){
	if(n==0)
	return;
	cout<<n<<endl;
	natural(n-1);
}
int main(){
	int n;
	cin>>n;
	natural(n);
	
}
