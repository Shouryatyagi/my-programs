// Method 1
#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string a){
    string res = a;
    reverse(res.begin(),res.end());
    if(a == res) return true;
    return false;
}

void helper(int ind, string s,string t, vector<string>&ans){
    if(ind == s.length()){
        if(is_palindrome(t)){
            ans.push_back(t);
        }
        return;
    }
    helper(ind+1,s,t+s[ind],ans);
    helper(ind+1,s,t,ans);
}


void palindrome_partition(string s){
    vector<string> ans;
    string t="";
    helper(0,s,t,ans);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    string s;
    cin>>s;
    palindrome_partition(s);
}

// Method 2
// #include <bits/stdc++.h>
// using namespace std;

// bool is_palindrome(string a){
//     string reversed = a;
//     reverse(reversed.begin(), reversed.end());
//     return (a == reversed);
// }

// void helper(int start, string s, vector<string>& ans){
//     for (int end = start; end < s.length(); end++) {
//         string substr = s.substr(start, end - start + 1);
//         if (is_palindrome(substr)) {
//             ans.push_back(substr);
//         }
//     }
// }

// void palindrome_partition(string s){
//     vector<string> ans;
//     for (int i = 0; i < s.length(); i++) {
//         helper(i, s, ans);
//     }
//     for(int i=0; i<ans.size(); i++){
//         cout << ans[i] << " ";
//     }
// }

// int main(){
//     string s;
//     cin >> s;
//     palindrome_partition(s);
// }





