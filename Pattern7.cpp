#include <bits/stdc++.h>
/*
E       E
 D     D
  C   C
   B B
    A
*/
using namespace std;
void patt(int k)
{
    int i, j;
    for (i = k - 1; i >= 0; i--) {
        for (j = k - 1; j > i; j--) {
            cout << " ";
        }
        cout << char(i + 65);
        for (j = 1; j < (i * 2); j++)
            cout << " ";
        if (i >= 1)
            cout << char(i + 65);
        cout << "\n";
    }
}
int main()
{
  int k = 5;
  patt(k);
    return 0;
}
