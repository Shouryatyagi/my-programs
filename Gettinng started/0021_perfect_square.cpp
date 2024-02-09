#include<bits/stdc++.h>
using namespace std;

void perfect_square(int n){
    if(ceil((double)sqrt(n)) == floor((double)sqrt(n))) cout<<"perfect square";
    else cout<<"not a perfect square";
}

int main()
{
    int n;
    cin>>n;
    perfect_square(n);
}
