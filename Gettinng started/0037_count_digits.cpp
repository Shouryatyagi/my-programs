#include<bits/stdc++.h>
using namespace std;

int countdigits(int n){
    int a = log10(n) + 1;
    return a;
}

int main()
{
    int n;
    cin>>n;
    cout<<countdigits(n);
}
