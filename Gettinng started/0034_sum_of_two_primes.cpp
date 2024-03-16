#include<bits/stdc++.h>
using namespace std;


bool isprime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void myfunction(int n){
    int printed = 0;
    for(int i=2; i<n; i++){
        if(isprime(i) && isprime(n-i)){
             cout<<"YES"<<endl;
             cout<<i<<" "<<(n-i);
             printed++;
             break;
        }
    }
    if(printed == 0){
        cout<<"NO";
    }
}

int main(){
    int n;
    cin>>n;
    myfunction(n);
}
