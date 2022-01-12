// print n natural numbers in order using recursion

#include <iostream>
using namespace std;
void natural(int n){
	if(n==0)
	return;
	
	natural(n-1);
	cout<<n<<endl;
}
int main(){
	int n;
	cin>>n;
	natural(n);
	
}
