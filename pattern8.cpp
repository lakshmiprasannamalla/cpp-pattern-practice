#include <bits/stdc++.h>
using namespace std;

void print8()
{
    int i, j, k, n;

    cin >> n;

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
    print8();
    return 0;
}
