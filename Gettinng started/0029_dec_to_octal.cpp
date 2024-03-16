#include<bits/stdc++.h>
using namespace std;

void dec_to_octal(int n){
    int arr[32];
    int i=0;
    while(n){
        arr[i] = n%8;
        n/=8;
        i++;
    }
    
    for(int j=i-1; j>=0; j--){
        cout<<arr[j];
    }
}

int main(){
    int n;
    cin>>n;
    dec_to_octal(n);
}
