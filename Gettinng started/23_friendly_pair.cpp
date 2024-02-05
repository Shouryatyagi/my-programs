#include<bits/stdc++.h>
using namespace std;

void friendly_pair(int a, int b){
    int suma=0, sumb=0;
    for(int i=1; i<a; i++){
        if(a%i==0) suma+=i;
    }
    
    for(int i=1; i<b; i++){
        if(b%i==0) sumb+=i;
    }
    
    if(suma/a == sumb/b) cout<<"friendly pair";
    else cout<<"not a friendly pair";
}

int main()
{
    int a,b;
    cin>>a>>b;
    friendly_pair(a,b);
    
}
