#include<bits/stdc++.h>
using namespace std;

int order(int n);

void isarmstrong(int n){
    int len = order(n);
    int sum = 0;
    int org = n;
    while(n!=0){
        int rem = n%10;
        sum = sum + pow(rem,len);
        n = n/10;
    }
    if(sum == org) cout<<org<<" ";
}

int order(int n){
    int l = 0;
    while(n!=0){
        l++;
        n/=10;
    }
    return l;
}

int main(){

    int lower,upper;
    cin>>lower>>upper;
    for(int i=lower; i<=upper; i++){
        isarmstrong(i);
    }
}
