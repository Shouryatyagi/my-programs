// Any number that satisfies the following format –
// abcd… = an + bn + cn + dn + …
// Where n is the order(length/digits in number)


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
    if(sum == org) cout<<"Armstrong";
    else cout<<"Not an Armstrong";
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

    int n;
    cin>>n;
    isarmstrong(n);
}
