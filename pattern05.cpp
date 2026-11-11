#include <bits/stdc++.h>
using namespace std;

void print5()
{
    int i, j, n;

    cin >> n;

    for(i = 1; i <= n; i++)
    {
        for(j = n; j >= i; j--)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    print5();
    return 0;
}
