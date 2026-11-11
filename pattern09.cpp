#include <bits/stdc++.h>
using namespace std;

void print7(int n)
{
    int i, j, k;

    for(i = 1; i <= n; i++)
    {
        for(k = n-i; k > 0; k--)
        {
            cout << " ";
        }

        for(j = 1; j <= 2*i-1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void print8(int n)
{
    int i, j, k;

    for(i = 1; i <= n; i++)
    {
        for(k = 1; k <= i-1; k++)
        {
            cout << " ";
        }

        for(j = 1; j <= 2*(n-i)+1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    print7(n);
    print8(n);

    return 0;
}
