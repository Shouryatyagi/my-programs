#include<bits/stdc++.h>
using namespace std;

int countbits(string &s, char ch){
    int count = 0;
    for(char c:s){
        if(c==ch)count++;
    }
    return count;
}

void helper(int n, int ind, string s,vector<string>&ans ){
    if(ind==n){
        if(countbits(s,'1')>=countbits(s,'0')){
            ans.push_back(s);
        }
        return;
    }
    helper(n,ind+1,s+"1",ans);
    helper(n,ind+1,s+"0",ans);
}

void func(int n){
    string s = "1";
    vector<string> ans;
    helper(n,1,s,ans);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    func(n);
}
