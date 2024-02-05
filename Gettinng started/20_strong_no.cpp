#include<bits/stdc++.h>
using namespace std;

int fact(int n);
void strong_no(int n){
    int sum = 0;
    int org = n;
    while(n!=0){
        sum= sum + fact(n%10);
        n = n/10;
    }
    if(sum==org) cout<<"strong no";
    else cout<<"not a strong no";
}

int fact(int n){
    int ans = 1;
    while(n!=0){
        ans = ans*n;
        n--;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    strong_no(n);
}
