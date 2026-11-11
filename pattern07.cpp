#include <bits/stdc++.h>
using namespace std;

void print7()
{
    int i, j, k, n;

    cin >> n;

    for(i = 1; i <= n; i++)
    {
        for(k = n-i; k >= 0; k--)
        {
            cout << " ";
        }

        for(j = 1; j <= (2*i-1); j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    print7();
    return 0;
}
