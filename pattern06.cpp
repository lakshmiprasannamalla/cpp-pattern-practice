#include <bits/stdc++.h>
using namespace std;

void print6()
{
    int i, j, n;

    cin >> n;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= (n-i+1); j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

int main()
{
    print6();
    return 0;
}
