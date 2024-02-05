#include<bits/stdc++.h>
using namespace std;
void even_odd(int n){
    // bruteforce approach
    (n%2==0)? cout<<"Even": cout<<"Odd";

    // bit manipulation
    // (n&1)?cout<<"Odd":cout<<"Even";
}
int main()
{
    int n;
    cin>>n;
    even_odd(n);
}
