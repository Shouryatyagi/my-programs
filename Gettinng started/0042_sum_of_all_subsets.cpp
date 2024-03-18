#include<bits/stdc++.h>
using namespace std;

void helper(int ind, int sum, vector<int>&v, vector<int> &ans){
    if(ind == v.size()){
        ans.push_back(sum);
        return;
    }
    helper(ind+1,sum+v[ind],v,ans);
    helper(ind+1,sum,v,ans);
}

void subsetsum(vector<int> &v){
    vector<int> ans;
    helper(0,0,v,ans);
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    subsetsum(v);
}
