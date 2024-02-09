#include<bits/stdc++.h>
using namespace std;

// for numbers
// void is_palindrome(int n){
//     int num = n;
//     int rev = 0;
//     while(n>0){
//         rev = rev*10 + n%10;
//         n = n/10;
//     }
//     if(num == rev) cout<<"Palindrome";
//     else cout<<"Not a Palindrome";
// }

// for strings
void is_palindrome(string s){
    string t = s;
    reverse(t.begin(),t.end());
    if(s==t) cout<<"palindrome";
    else cout<<"Not a palindrome";
}


int main(){
    // int n; // for numbers
    // cin>>n;
    // is_palindrome(n);

    string s; // for string
    cin>>s;
    is_palindrome(s);
}
