#include <bits/stdc++.h>
using namespace std;

// First method
// void row(int n){
//     int prev = 1;
//     cout<<prev;
//     for(int i=1; i<=n; i++){
//         int curr = prev * (n-i+1)/i;
//         cout<<" "<<curr;
//         prev = curr;
//     }
// }

// Second method
int fact(int n, int r){
    int res = 1;
    for(int i=0; i<r; i++){
        res*=n-i;
        res/=i+1;
    }
    return res;
}
void row(int n){
    for(int i=0; i<n; i++){
        cout<<fact(n,i)<<" ";
    }
    cout<<1;
}

int main()
{
    int n;
    cin>>n;
    row(n);
}
