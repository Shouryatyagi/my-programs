// using recurion
#include<bits/stdc++.h>
using namespace std;

void helper(int ind, string s,vector<string> &ans){
    if(ind==s.size()){
        ans.push_back(s);
        return;
    }
    
    for(int i=ind; i<s.size(); i++){
        swap(s[i],s[ind]);
        helper(ind+1,s,ans);
        swap(s[i],s[ind]);
    }
}

void permute(string s){
    vector<string> ans;
    helper(0,s,ans);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    string s;
    cin>>s;
    permute(s);
}


// without recursion

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    do{
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));
}
