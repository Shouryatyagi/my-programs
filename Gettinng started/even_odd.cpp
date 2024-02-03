#include<bits/stdc++.h>
using namespace std;
void even_odd(int n){
    cout<<(n%2==0)? cout<<"Even": cout<<"Odd";
}
int main()
{
    int n;
    cin>>n;
    even_odd(n);
}