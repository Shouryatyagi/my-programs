#include <bits/stdc++.h>
using namespace std;

void greater_no(int a, int b){
    if(a==b) cout<<"Equal";
    else{
        (a>b)?cout<<a:cout<<b;
    }
}

int main()
{
    int a, b;
    cin>>a>>b;
    greater_no(a,b);
}
