#include<bits/stdc++.h>
using namespace std;

// void dec_to_binary(int n){ // Method 1
//     int arr[32];
//     int i=0;
//     while(n){
//         arr[i] = n%2;
//         n/=2;
//         i++;
//     }
//     for(int j=i-1; j>=0; j--){
//         cout<<arr[j];
//     }
// }

void dec_to_binary(int n){ // Method 2
    long long binary=0;
    int i=1, rem = 0;
    while(n){
        rem = n%2;
        n=n/2;
        binary+=rem*i;
        i*=10;
    }
    cout<<binary;
}

int main(){
    int n;
    cin>>n;
    dec_to_binary(n);
}
