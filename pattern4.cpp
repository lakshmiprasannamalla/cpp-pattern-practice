#include <bits/stdc++.h>
using namespace std;

void print4()
{
    int i, j, n;

    cin >> n;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}

int main()
{
    print4();
    return 0;
}
