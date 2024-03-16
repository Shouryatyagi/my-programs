// count the set bit in a binary string
#include<bits/stdc++.h>
using namespace std;

int countbits(string &s){
    int count = 0;
    for(char c:s){
        if(c=='1')count++;
    }
    return count;
}

int main()
{
    string s;
    cin>>s;
    cout<<countbits(s);
    
}
