#include <bits/stdc++.h>
using namespace std;

// brute force
// void get_sum(int n)
// {
//     cout<<n*(n+1)/2;
// }


// recursion
int get_sum(int n){
   if(n==0) return n;
   return n + get_sum(n-1);
}

int main()
{
    int n;
    cin >> n;
    // get_sum(n); // bf
    cout<<get_sum(n);
}
