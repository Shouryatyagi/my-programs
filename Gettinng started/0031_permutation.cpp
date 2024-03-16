// Arranging n peoples on r seats
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int ans = 1;
    while(n>0){
        ans*=n;
        n--;
    }
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<factorial(n) / factorial(n-r);
}
