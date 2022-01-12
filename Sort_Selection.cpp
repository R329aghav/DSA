// Selection sort

#include <iostream>
using namespace std;
//selection Sort
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		int min=arr[i];
//		j=i+1;
		int loc=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<min){
				min=j;
				loc=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;
	}
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<endl;
	}
}
