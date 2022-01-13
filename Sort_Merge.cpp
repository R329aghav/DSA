// Merge Sort

#include <iostream>
using namespace std;
void mergesort(int arr[],int lb,int ub);
void merge(int arr[],int lb,int mid,int ub);

void merge(int arr[],int lb,int mid,int ub){
//	int mid;
	int i=lb;
	int j=mid+1;
	int k=lb;
	int b[50];
	while(i<=mid && j<=ub){
		if(arr[i]<=arr[j]){
			b[k]=arr[i];
			i++;
			k++;
		}
		else{
			b[k]=arr[j];
			j++;
			k++;
		}
	}
	if(i>mid){
		while(j<=ub){
			b[k]=arr[j];
			j++;
			k++;
		}
	}
	else{
		while(i<=mid){
			b[k]=arr[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++){
		arr[k]=b[k];
	}
}
void mergesort(int arr[],int lb, int ub){
	if(lb<ub){
		int mid=(lb+ub)/2;
		mergesort(arr,lb,mid);
		mergesort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
