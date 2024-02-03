#include <bits/stdc++.h>
using namespace std;

// bruteforce
// int isprime(int n){
//     int count = 0;
//     for(int i=1; i<n+1; i++){
//         if(n%i==0) count++;
//     }
//     if(count == 2) return true;
//     else return false;
// }


// optimized
bool isprime(int n){
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
    return prime;
}

int main()
{
    int lower, upper;
    cin>>lower>>upper;
    for(int i=lower; i<=upper; i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}
