#include<bits/stdc++.h>
using namespace std;

void prime_factors(int n){
    for(int i=2; i<=n; i++){
        while(n%i == 0){
            cout<<i<<" ";
            n = n/i;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    prime_factors(n);
}
