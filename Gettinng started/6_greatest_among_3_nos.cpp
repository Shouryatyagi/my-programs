#include <bits/stdc++.h>
using namespace std;

void greater_no(int a, int b, int c){
    if(a==b==c) cout<<"Equal";
    else{
        (a>b) ? ((a>c)? cout<<a: cout<<c) : ((b>c)? cout<<b: cout<<c);
    }
}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    greater_no(a,b,c);
}
