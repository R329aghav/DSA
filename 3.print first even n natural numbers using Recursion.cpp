// 3. print first even n natural numbers using recursion

#include <iostream>
using namespace std;
void even(int i,int n){
	if(i<=n)
	{
	cout<<2*i<<endl;
	even(i+1,n);
	}


}
int main(){
	int n,i;
	cin>>n;
	even(i+1,n);
}
