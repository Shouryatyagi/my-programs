#include<bits/stdc++.h>
using namespace std;

void factors(int n){
    vector<int> v;
    
    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            if(n/i == i) v.push_back(i);
            else {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    factors(n);
}
