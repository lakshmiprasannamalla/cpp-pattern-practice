#include <bits/stdc++.h>
using namespace std;

void print2()
{
    int n, i, j;

    cin >> n;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    print2();
    return 0;
}
