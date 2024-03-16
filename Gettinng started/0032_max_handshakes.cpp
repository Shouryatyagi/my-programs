#include<bits/stdc++.h>
using namespace std;

int max_handshake(int n){
    return (n-1)*n/2;
}

int main(){
    int n;
    cin>>n;
    cout<<max_handshake(n);
}
