#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n<2) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int low,high;
    cin>>low>>high;
    for(int i=low; i<=high; i++){
        if(isprime(i)) cout<<i<<" ";
    }
}
