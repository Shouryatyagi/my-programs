#include<bits/stdc++.h>
using namespace std;
// 1
// using static variable
// void fib(int n){
//     static int t1 = 0, t2 = 1, next_term;
//     if(n>0){
//         next_term = t1 + t2;
//         t1 = t2;
//         t2 = next_term;
//         cout<<next_term<<", ";
//         fib(n-1);
//     }
// }


// 2
// without static variable
// int fib(int n){
//     if(n<=1) return n;
//     return fib(n-1) + fib(n-2);
// }


// 3 
// dp 
void fib(int n){
    int f[n+1];
    f[0] = 0;
    f[1] = 1;
    
    cout<<f[0]<<" "<<f[1]<<" ";
    
    for(int i=2; i<n; i++){
        f[i] = f[i - 1] + f[i - 2];
        cout << f[i] <<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    // 1
    // cout<<"0, 1, ";
    // fib(n-2); // 2 terms are already printed
    
    // 2
    // for(int i=0; i<n; i++){
    //     cout<<fib(i)<<" ";
    // }
    
    // 3
    fib(n);
    
}
