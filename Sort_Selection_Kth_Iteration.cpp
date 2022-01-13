// Selection sort kth iteration

#include <iostream>
using namespace std;
int main()
{
    int n, arr[50], i, j, temp, min, count=0, loc;
   cin>>n;
    for(i=0; i<n; i++)

cin>>arr[i];
    for(i=0; i<(n-1); i++)
    {
        min = arr[i];
        for(j=(i+1); j<n; j++)
        {
            if(min>arr[j])
            {
                min = arr[j];
                count++;
                loc = j;
            }
        }
        if(count!=0)
        {
            temp = arr[i];
            arr[i] = min;
            arr[loc] = temp;
        }

cout<<"steps"<<i+1<<" ";
        for(j=0; j<n; j++)

cout<<arr[j];

cout<<endl;
        count=0;
    }

cout<<"after Sorting "<<endl;
    for(i=0; i<n; i++)

cout<<arr[i];

    return 0;
}
