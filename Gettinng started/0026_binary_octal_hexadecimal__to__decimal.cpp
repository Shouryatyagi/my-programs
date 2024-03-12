#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int decimal1 = stoi(s,0,2); // if s is binary string
    int decimal2 = stoi(s,0,8); // if s is octal string
    int decimal3 = stoi(s,0,16); // if s is hexadecimal
    
    cout<<decimal1<<" "<<decimal2<<" "<<decimal3;
}
