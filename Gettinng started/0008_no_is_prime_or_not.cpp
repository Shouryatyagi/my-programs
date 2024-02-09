#include <bits/stdc++.h>
using namespace std;

// bruteforce
// void isprime(int n){
//     int count = 0;
//     for(int i=1; i<n+1; i++){
//         if(n%i==0) count++;
//     }
//     if(count == 2) cout<<"prime";
//     else cout<<"not prime";
// }


// optimized
void isprime(int n){
    bool prime = true;
    if(n<2){
        prime = false;
    }
    else{
        for(int i=2; i<sqrt(n); i++){
            if(n%i == 0){
                prime = false;
                break;
            }
        }
    }
    prime ? cout<<"prime": cout<<"not prime";
}

int main()
{
    int n;
    cin>>n;
    isprime(n);
}
