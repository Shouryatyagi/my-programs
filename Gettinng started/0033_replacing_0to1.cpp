#include<bits/stdc++.h>
using namespace std;

int myfunction(int n){
    int num1=0;
    while(n){
        int rem = n%10;
        if(rem==0) rem = 1;
        num1 = num1*10 + rem;
        n=n/10;
    }
    
    n = 0;
    // reverse the number
    while(num1){
        int rem = num1%10;
        n = n*10 + rem;
        num1/=10;
    }
    return n;
}

int main(){
    int n;
    cin>>n;
    int ans = myfunction(n);
    cout<<ans;
}
