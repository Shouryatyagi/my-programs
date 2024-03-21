#include<bits/stdc++.h>
using namespace std;

void helper(int ind, vector<int>& a, vector<int>& temp, vector<vector<int>>& ans){
    if(ind == a.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(a[ind]);
    helper(ind+1,a,temp,ans);
    temp.pop_back();
    helper(ind+1,a,temp,ans);
}

void subsets(vector<int>&a){
    vector<vector<int>> ans;
    vector<int> temp;
    helper(0,a,temp,ans);
    
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        a.push_back(t);
    }
    subsets(a);
}
