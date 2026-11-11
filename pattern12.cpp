#include <bits/stdc++.h>
using namespace std;

void print12(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        for(int k = 1; k <= 2*(n-i); k++)
        {
            cout << "  ";
        }

        for(int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    print12(n);

    return 0;
}
