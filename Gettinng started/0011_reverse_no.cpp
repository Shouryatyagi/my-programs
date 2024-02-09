#include<bits/stdc++.h>
using namespace std;

void reverse_no(int n){
    int rev = 0;
    while(n>0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    cout<<rev;
}

int main(){
    int n; //bf
    cin>>n;
    reverse_no(n);
}
