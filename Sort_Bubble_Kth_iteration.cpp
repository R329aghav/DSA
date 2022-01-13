// Bubble sort kth iteration

#include <iostream>
using namespace std;
int main()
{
    int arr[10], i, j, temp;
    
    for(i=0; i<10; i++)

        cin>>arr[i];
    for(i=0; i<(10-1); i++)
    {
        for(j=0; j<(10-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout<<endl;
        
        cout<<"steps"<<i+1<<" ";
        for(j=0; j<10; j++)
         cout<<arr[j];
    cout<<endl;
    }

    cout<<"sorted array"<<endl;
    for(i=0; i<10; i++)

cout<<arr[i];

    return 0;
}
