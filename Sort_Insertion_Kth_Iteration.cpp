// Insertion sort kth iteration

#include <iostream>
using namespace std;

void insertionsort(int A[], int n)
{
    int value,hole  ;
    for(int i=1; i<n; i++)
    {
        value = A[i];
        hole = i;

        while(hole > 0 && A[hole-1] > value)
        {
            A[hole] = A[hole-1];
            hole = hole -1;
        }
        A[hole] = value;
    }
}

void displayarray(int A[], int n)
{
    for(int i=0; i<n; i++)
        cout << A[i] << ";";
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    int A[n];

    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    for(int i=0; i<n; i++){
        if(i > 0){
            insertionsort(A,i+1);
            displayarray(A, i+1);
        }
    }

    return 0;
}
