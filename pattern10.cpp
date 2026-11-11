#include <bits/stdc++.h>
using namespace std;

void print10()
{
    int i, j, k, n;
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        for(k = n-i; k > 0; k--)
        {
            cout << " ";
        }

        cout << endl;
    }

    for(i = 1; i < n; i++)
    {
        for(j = 1; j < n-i; j++)
        {
            cout << "* ";
        }

        for(k = 1; k <= i-1; k++)
        {
            cout << " ";
        }
    }
}

int main()
{
    print10();
    return 0;
}
