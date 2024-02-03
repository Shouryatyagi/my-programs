// Condition for leap year
// 1. If a year is divisible by 400, it's a leap year.
// or
// 2. If a year is divisible by 4 but not by 100 then its leap year


#include <bits/stdc++.h>
using namespace std;

void leap_year(int n){
    int flag = (n%400==0) || (n%4==0 && n%100!=0)? 1:0;
    if(flag==1) cout<<"Leap year";
    else cout<<"Not a leap year";
}

int main()
{
    int n;
    cin>>n;
    leap_year(n);
}
