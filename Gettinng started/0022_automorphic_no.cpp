#include<bits/stdc++.h>
using namespace std;

int automorphic_no(int n){
    int square = n*n;
    
    while(n!=0){
        if(n%10 != square%10) return 0;
        n/=10;
        square/=10;
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    if(automorphic_no(n)) cout<<"Automorphic no";
    else cout<<"Not automorphic no";
}
