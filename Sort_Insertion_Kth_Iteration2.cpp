#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    int temp,j  ;
    for(int i=1; i<n; i++)
    {
        temp = arr[i];
        j= i;

        while(j > 0 && arr[j-1] > temp)
        {
            arr[j] = arr[j-1];
            j = j -1;
        }
        arr[j] = temp;
    }
}

void displayarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout <<arr[i] << ",";
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >>arr[i];
    }
    for(int i=0; i<n; i++){
        if(i > 0){
            insertionsort(arr,i+1);
            displayarray(arr, i+1);
        }
    }

    return 0;
}
