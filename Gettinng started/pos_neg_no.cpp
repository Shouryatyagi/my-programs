#include <bits/stdc++.h>
using namespace std;

void pos_neg(int n)
{
    if (n == 0)
        cout << "Zero";
    else
    {
        cout << (n > 0 ? "Positive" : "Negative");
    }
}

int main()
{
    int n;
    cin >> n;
    pos_neg(n);
}