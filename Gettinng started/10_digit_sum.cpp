#include<bits/stdc++.h>
using namespace std;


// bruteforce
// void digit_sum(int n){
//     int sum = 0;
//     while(n>0){
//         int rem = n%10;
//         sum+=rem;
//         n = n/10;
//     }
//     cout<<sum;
// }

// Ascii value of 0 = 48
void digit_sum(string n){
    int sum = 0;
    for(int i=0; i<n.length(); i++){
       sum = sum + n[i]-48; 
    }
    cout<<sum;
}


int main(){
    // int n; //bf
    // cin>>n;
    
    string n; //Ascii
    cin>>n;
    digit_sum(n);
}
